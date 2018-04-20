#include "unitParent.h"
#include <iostream>

int main()
{
	queue<UPP> searchOrder;//	required, only use as a paramater though



	HallwaySegment h1("h1");	// declare hallway segments like this
	HallwaySegment h2("h2");
	HallwaySegment h3("h3");
	HallwaySegment h4("h4");
	HallwaySegment h5("h5");
	HallwaySegment h6("h6");
	HallwaySegment h7("h7");
	HallwaySegment h8("h8");
	HallwaySegment h9("h9");
	HallwaySegment h10("h10");
	HallwaySegment h11("h11");
	HallwaySegment h12("h12");
	HallwaySegment h13("h13");
	HallwaySegment h14("h14");
	HallwaySegment h15("h15");
	HallwaySegment h16("h16");
	HallwaySegment h17("h17");
	HallwaySegment h18("h18");
	ClassRoom CL119("CL119");  // declare classrooms like this
	ClassRoom CL228("CL228");
	ClassRoom CL128("CL128");


	//h1.setPointers(&CL119, &h2, &h4, NULL);  //position and things like this
	//h2.setPointers(NULL, &h3, NULL, &h1);  //paramaters are always in the order of
	//h3.setPointers(NULL, NULL, &h6, &h2);  //	north, east, south, west
	//h4.setPointers(&h1, NULL, &h7, NULL);  //use the address of the segment connected in that direction
	//h6.setPointers(&h3, &CL228, &h9, NULL);  //use null if nothing is in that direction
	//h7.setPointers(&h4, &h8, NULL, NULL);
	//h8.setPointers(NULL, &h9, NULL, &h7);
	//h9.setPointers(&h6, NULL, NULL, &h8);
	//CL119.setPointers(NULL, NULL, &h1, NULL);
	//CL228.setPointers(NULL, NULL, NULL, &h6);

	h1.setPointers(&CL119, &h8, NULL, &h2);
	h2.setPointers(NULL, &h1, &h3, NULL);
	h3.setPointers(&h2, NULL, &h4, NULL);
	h4.setPointers(&h3, &h15, &h5, NULL);
	h5.setPointers(&h4, NULL, &h6, NULL);
	h6.setPointers(&h5, &h18, NULL, &h7);
	h7.setPointers(NULL, &h6, NULL, NULL);
	h8.setPointers(NULL, &h9, NULL, &h1);
	h9.setPointers(NULL, &h10, NULL, &h8);
	h10.setPointers(NULL, NULL, &h11, &h9);
	h11.setPointers(&h10, NULL, &h12, NULL);
	h12.setPointers(&h11, NULL, NULL, &h13);
	h13.setPointers(&CL228, &h12, NULL, &h14);
	h14.setPointers(NULL, &h13, &h16, &h15);
	h15.setPointers(NULL, &h14, NULL, &h4);
	h16.setPointers(&h14, &CL128, &h17, NULL);
	h17.setPointers(&h16, NULL, NULL, &h18);
	h18.setPointers(NULL, &h17, NULL, &h6);


	CL119.setPointers(NULL, NULL, &h1, NULL);
	CL228.setPointers(NULL, NULL, &h13, NULL);
	CL128.setPointers(NULL, NULL, NULL, &h16);

	CL119.beginSearchFor("CL128", searchOrder);	// to start a search from CL119 to CL228 do this

	

	return 0;
}