#include <cstdlib>
#include <string>
#include <queue>


using namespace std;

//#pragma once


enum unitType{hallwaySegment, stairSegment, outsideSegment, door, elevator, classRoom};

class UnitParent;
class UPP;

class QueuePiece
{
public:
	QueuePiece();
	QueuePiece(unitType);
	~QueuePiece();

	unitType getMyUnitType();
	void setMyUnitType(unitType);

private:
	//  !!!! pointer to corosponding lable !!!!
	unitType myUnitType;
	
};

class SearchBot
{
public:
	SearchBot();
	//SearchBot(SearchBot);
	//SearchBot(unitType);
	SearchBot(queue<QueuePiece>);
	~SearchBot();

	
	void createMyQueue(unitType);
	queue<QueuePiece> getQueueCopy();
	void addToQueue(unitType);
	//int getLength();
	//void incrementLength();
	void recieveNewQueue(queue<QueuePiece>);
	//void setEqual(SearchBot);
	//void setHeadUnitType(unitType);
	//void nullHeadsNext();

private:
	//PathQueue * headOfQueue;
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

	void beginSearchFor(string, queue<UPP>);
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
	bool continueTheSearch(queue<UPP> &, string); //returns true if destination is found
	bool checkQueueForDestination(queue<UPP>, string);
	void lightUpThePath(queue<QueuePiece>);
	//void moveDownTheList(SearchOrderQueue *);

private:
	UnitParent * unitToSearch;
};