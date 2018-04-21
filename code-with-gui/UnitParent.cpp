#include "unitParent.h"
#include <iostream>
#include "GUI.h"
//#include <queue>

using namespace System;
using namespace System::Windows::Forms;

QueuePiece::QueuePiece()
{

}

QueuePiece::QueuePiece(unitType u, string s)
{
	myUnitType = u;
	unitName = s;
}

QueuePiece::~QueuePiece()
{

}

unitType QueuePiece::getMyUnitType()
{
	return myUnitType;
}

void QueuePiece::setMyUnitType(unitType u)
{
	myUnitType = u;
}

string QueuePiece::getUnitName()
{
	return unitName;
}



SearchBot::SearchBot()
{
	queueLength = 0;
}

SearchBot::SearchBot(queue<QueuePiece> q)
{
	myQueue = q;
	queueLength = q.size();
}

SearchBot::~SearchBot()
{
	for (queueLength; queueLength > 0; queueLength--)
	{
		myQueue.pop();
	}
}

void SearchBot::createMyQueue(unitType u, string s)
{
	QueuePiece tempPiece{ u,s };


	myQueue.push(tempPiece);	//implicitly calls the queuePiece constructor
	queueLength = 1;
}

queue<QueuePiece> SearchBot::getQueueCopy()
{
	queue<QueuePiece> copy = myQueue;
	return copy;
}

void SearchBot::recieveNewQueue(queue<QueuePiece> newQueue)
{
	myQueue = newQueue;
	queueLength = myQueue.size();
}

void SearchBot::addToQueue(unitType u, string s)
{
	QueuePiece tempPiece{ u, s };
	
	myQueue.push(tempPiece);
	queueLength++;
}



bool UnitParent::hasBot()
{
	return hasBotOrNot;
}

UnitParent::UnitParent()
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
}

UnitParent::~UnitParent()
{

}

string UnitParent::getName()
{
	return name;
}

queue<UPP> UnitParent::spreadBots(string destination, queue<UPP> searchOrder)
{
	
	//	test the unit in all 4 directions to see if it exits and doesnt already have a searchbot
	//	if acceptable it hands a copy of the path queue to that directions search bot
	//	that unit is then added to the search order so they can later share there searchbots too
	if (north != NULL && north->hasBotOrNot == false)
	{
		north->recieveSearchBot(myBot.getQueueCopy(), destination);
		cout << "Handed a bot north from " << getName() << " to " << north->getName() << endl;
		searchOrder.push(north);
	}
	
	if (east != NULL && east->hasBotOrNot == false)
	{
		east->recieveSearchBot(myBot.getQueueCopy(), destination);
		cout << "Handed a bot east from " << getName() << " to " << east->getName() << endl;
		searchOrder.push(east);
	}

	if (south != NULL && south->hasBotOrNot == false)
	{
		//south->recieveSearchBot(myBot->getPathQueueCopy(), destination);
		south->recieveSearchBot(myBot.getQueueCopy(), destination);
		cout << "Handed a bot south from " << getName() << " to " << south->getName() << endl;
		searchOrder.push(south);
	}
	if (west != NULL && west->hasBotOrNot == false)
	{
		west->recieveSearchBot(myBot.getQueueCopy(), destination);
		cout << "Handed a bot west from " << getName() << " to " << west->getName() << endl;
		searchOrder.push(west);
	}
	
	return searchOrder;
}

void UnitParent::recieveSearchBot(queue<QueuePiece> newQueue, string destination)
{
	//	set the queue to hold information of its path so far
	myBot.recieveNewQueue(newQueue);
	hasBotOrNot = true;

	//	update the queue to hold information from this unit
	myBot.addToQueue(getUnitType(), getName());

}

void UnitParent::setPointers(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w)
{
	north = n;
	east = e;
	south = s;
	west = w;
}

void UnitParent::beginSearchFor(string destination, queue<UPP> searchOrder, string names[])
{
	bool isFound = false;
	if (destination == name)
	{
		return;
	}
	
	//	1	intitalize the searchbots queue with info on this unit type
	myBot.createMyQueue(getUnitType(), getName());
	hasBotOrNot = true;

	//	2	have this unit spread copies of its queue to put in the bots of its neighboring units
	searchOrder = spreadBots(destination, searchOrder);

	/*myBot.setHeadUnitType(getUnitType());
	myBot.nullHeadsNext();
	
	searchOrderQueueHead = &(spreadBots(destination, searchOrderQueueHead));
	*/
	UPP nextUp;
	while (!isFound)
	{
		//isFound = searchOrdercontinueTheSearch(destination, searchOrderQueueHead);
		nextUp = searchOrder.front();
		isFound = nextUp.continueTheSearch(searchOrder, destination, names);
		if (!isFound)
			searchOrder.pop();
			
	}
	//cout << endl << "IT FUCKING WORKS" << endl;
}

bool UnitParent::isDestination(string destination)
{
	if (this->name == destination)
	{
		return true;
	}
	else
		return false;
}

queue<QueuePiece> UnitParent::getMyBotsQueue()
{
	return myBot.getQueueCopy();
}



HallwaySegment::HallwaySegment(string n)
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
	name = n;
}

HallwaySegment::HallwaySegment(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w)
{
	north = n;
	east = e;
	south = s;
	west = w;
	name = "hallway";
	hasBotOrNot = false;
}

unitType HallwaySegment::getUnitType()
{
	return hallwaySegment;
}



StairSegment::StairSegment(string n)
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
	name = n;
}

StairSegment::StairSegment(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w)
{
	north = n;
	east = e;
	south = s;
	west = w;
	hasBotOrNot = false;
	name = "stairs";
}

unitType StairSegment::getUnitType()
{
	return stairSegment;
}



OutsideSegment::OutsideSegment(string n)
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
	name = n;
}

OutsideSegment::OutsideSegment(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w)
{
	north = n;
	east = e;
	south = s;
	west = w;
	hasBotOrNot = false;
	name = "outside";
}

unitType OutsideSegment::getUnitType()
{
	return outsideSegment;
}



Door::Door(string n)
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
	name = n;
}

Door::Door(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w)
{
	north = n;
	east = e;
	south = s;
	west = w;
	hasBotOrNot = false;
	name = "door";
}

unitType Door::getUnitType()
{
	return door;
}



Elevator::Elevator(string n)
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
	name = n;
}

Elevator::Elevator(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w)
{
	north = n;
	east = e;
	south = s;
	west = w;
	hasBotOrNot = false;
	name = "elevator";
}

unitType Elevator::getUnitType()
{
	return elevator;
}



ClassRoom::ClassRoom(string n)
{
	north = NULL;
	east = NULL;
	south = NULL;
	west = NULL;
	hasBotOrNot = false;
	name = n;
}

ClassRoom::ClassRoom(UnitParent * n, UnitParent * e, UnitParent * s, UnitParent * w, string na)
{
	north = n;
	east = e;
	south = s;
	west = w;
	hasBotOrNot = false;
	name = na;
}

unitType ClassRoom::getUnitType()
{
	return classRoom;
}



UPP::UPP()
{

}

UPP::UPP(UnitParent * nextUP)
{
	unitToSearch = nextUP;
}

UPP::~UPP()
{

}

bool UPP::continueTheSearch(queue<UPP> & searchOrder, string destination, string names[])
{
	UPP thisUnit = searchOrder.front();

	searchOrder = thisUnit.unitToSearch->spreadBots(destination, searchOrder);

	if (checkQueueForDestination(searchOrder, destination, names) == true)
	{
		return true;
	}

	return false;
}

bool UPP::checkQueueForDestination(queue<UPP> copy, string destination, string names[])
{
	int length = copy.size();
	UPP temp;

	for (int x = 0; x < length; x++)
	{
		temp = copy.front();
		if (temp.unitToSearch->isDestination(destination))
		{
			lightUpThePath(temp.unitToSearch->getMyBotsQueue(), names);
			return true;
		}
	}
	return false;
}

void UPP::lightUpThePath(queue<QueuePiece> thePath, string names[])
{
	
	int length = thePath.size();
	string name;
	QueuePiece unitToLightUp;
	string arrayName[50];

	cout << "Called the light up path function, there are " << length;
	cout << " lables to light up" << endl;
	for (int x = 0; x < length; x++)
	{
		unitToLightUp = thePath.front();

		name = unitToLightUp.getUnitName();
		names[x] = name;

		thePath.pop();
	}
}