#include <cstdlib>
#include <string>
#include <queue>

using namespace std;

enum unitType{hallwaySegment, stairSegment, outsideSegment, door, elevator, classRoom};

class UnitParent;
class UPP;

class QueuePiece
{
public:
	QueuePiece();
	QueuePiece(unitType, string);
	~QueuePiece();

	unitType getMyUnitType();
	void setMyUnitType(unitType);
	string getUnitName();

private:
	//  !!!! pointer to corosponding lable !!!!
	unitType myUnitType;
	string unitName;
	
};

class SearchBot
{
public:
	SearchBot();
	SearchBot(queue<QueuePiece>);
	~SearchBot();

	
	void createMyQueue(unitType, string);
	queue<QueuePiece> getQueueCopy();
	void addToQueue(unitType, string);
	void recieveNewQueue(queue<QueuePiece>);

private:
	queue<QueuePiece> myQueue;
	int queueLength;
};

//	a parent class for unit types, it has a pure virtual function and is therefor abstract
class UnitParent
{
public:
	UnitParent();
	~UnitParent();

	//	A pure vrtual function that will return the enumerated type to represent unit type
	virtual unitType getUnitType() = 0;	// must be defined in all child classes

	void beginSearchFor(string, queue<UPP>, string[]);
	queue<UPP> spreadBots(string, queue<UPP>);
	queue<QueuePiece> getMyBotsQueue();
	// sets the north east, south, and west pointers in that order
	void setPointers(UnitParent *, UnitParent *, UnitParent *, UnitParent *);
	bool isDestination(string destination);
	bool hasBot();
	string getName();

protected:

	void recieveSearchBot(queue<QueuePiece>, string);
	UnitParent * north;
	UnitParent * south;
	UnitParent * east;
	UnitParent * west;
	SearchBot myBot;
	bool hasBotOrNot;
	string name;
};

class HallwaySegment : public UnitParent
{
public:
	HallwaySegment(string);
	HallwaySegment(UnitParent *, UnitParent *, UnitParent *, UnitParent *);

	unitType getUnitType();

private:
};

class StairSegment : public UnitParent
{
public:
	StairSegment(string);
	StairSegment(UnitParent *, UnitParent *, UnitParent *, UnitParent *);

	unitType getUnitType();

private:
};

class OutsideSegment : public UnitParent
{
public:
	OutsideSegment(string);
	OutsideSegment(UnitParent *, UnitParent *, UnitParent *, UnitParent *);

	unitType getUnitType();

private:
};

class Door : public UnitParent
{
public:
	Door(string);
	Door(UnitParent *, UnitParent *, UnitParent *, UnitParent *);

	unitType getUnitType();
};

class Elevator : public UnitParent
{
public:
	Elevator(string);
	Elevator(UnitParent *, UnitParent *, UnitParent *, UnitParent *);

	unitType getUnitType();

private:
};

class ClassRoom : public UnitParent
{
public:
	ClassRoom(string);
	ClassRoom(UnitParent *, UnitParent *, UnitParent *, UnitParent *, string);

	unitType getUnitType();

private:

};

class UPP
{
public:
	UPP();
	UPP(UnitParent *);
	~UPP();
	//void addToQueue(UnitParent *);
	bool continueTheSearch(queue<UPP> &, string, string[]); //returns true if destination is found
	bool checkQueueForDestination(queue<UPP>, string, string[]);
	void lightUpThePath(queue<QueuePiece>, string[]);
	//void moveDownTheList(SearchOrderQueue *);

private:
	UnitParent * unitToSearch;
};