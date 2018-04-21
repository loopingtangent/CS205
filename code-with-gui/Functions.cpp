#include "unitParent.h"
#include <iostream>

using namespace std;

using namespace System;
using namespace System::Windows::Forms;

void runProgram(Object^ start, Object^ end, string names[])
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
	HallwaySegment h19("h19");
	HallwaySegment h20("h20");
	HallwaySegment h21("h21");
	HallwaySegment h22("h22");
	HallwaySegment h23("h23");
	HallwaySegment h24("h24");
	HallwaySegment h25("h25");
	HallwaySegment h26("h26");
	HallwaySegment h27("h27");
	HallwaySegment h28("h28");
	HallwaySegment h29("h29");
	HallwaySegment h30("h30");
	HallwaySegment h31("h31");
	HallwaySegment h32("h32");
	HallwaySegment h33("h33");
	HallwaySegment h34("h34");
	HallwaySegment h35("h35");
	HallwaySegment h36("h36");
	HallwaySegment h37("h37");
	HallwaySegment h38("h38");
	HallwaySegment h39("h39");
	HallwaySegment h40("h40");
	HallwaySegment h41("h41");
	HallwaySegment h42("h42");

	ClassRoom CL110("CL110");  // declare classrooms like this
	ClassRoom CL112("CL112");
	ClassRoom CL105("CL105");
	ClassRoom CL109("CL109");
	ClassRoom CL115("CL115");
	ClassRoom CL125("CL125");
	ClassRoom CL126("CL126");
	ClassRoom CL127("CL127");
	ClassRoom CL128("CL128");
	ClassRoom CL130("CL130");
	ClassRoom CL135("CL135");
	ClassRoom CL135_4("CL135.4");
	ClassRoom CL136("CL136");

	h1.setPointers(NULL, &h2, NULL, &CL110);
	h2.setPointers(NULL, &h3, NULL, &h1);
	h3.setPointers(NULL, &h4, NULL, &h2);
	h4.setPointers(NULL, &h5, NULL, &h3);
	h5.setPointers(&CL112, NULL, &h6, &h4);
	h6.setPointers(&h5, &h39, &h7, NULL);
	h7.setPointers(&h6, NULL, &h8, NULL);
	h8.setPointers(&h7, NULL, &h9, NULL);
	h9.setPointers(&h8, &h40, &h10, NULL);
	h10.setPointers(&h9, NULL, &h11, NULL);
	h11.setPointers(&h10, NULL, &h12, NULL);
	h12.setPointers(&h11, NULL, &h13, NULL);
	h13.setPointers(&h12, &h14, NULL, &h13);
	h14.setPointers(NULL, &h15, NULL, &h13);
	h15.setPointers(&CL136, &h16, NULL, &h14);
	h16.setPointers(NULL, &h17, NULL, &h15);
	h17.setPointers(&CL135, &h18, NULL, &h16);
	h18.setPointers(&CL135_4, &h19, NULL, &h17);
	h19.setPointers(NULL, &h20, NULL, &h18);
	h20.setPointers(NULL, &h21, &h23, &h19);
	h21.setPointers(NULL, &h22, NULL, &h20);
	h22.setPointers(NULL, NULL, NULL, &h21);
	h23.setPointers(&h24, NULL, &h20, NULL);
	h24.setPointers(&h25, &CL130, &h20, NULL);
	h25.setPointers(&h26, NULL, &h23, NULL);
	h26.setPointers(&h27, &CL128, &h24, NULL);
	h27.setPointers(&h28, NULL, &h25, NULL);
	h28.setPointers(&h29, &CL127, &h26, NULL);
	h29.setPointers(&h30, NULL, &h28, &CL126);
	h30.setPointers(NULL, &CL125, &h29, &h31);
	h31.setPointers(NULL, &h30, NULL, &h32);
	h32.setPointers(NULL, &h31, NULL, &h33);
	h33.setPointers(NULL, &h32, NULL, &h34);
	h34.setPointers(&CL115, &h33, NULL, &h35);
	h35.setPointers(NULL, &h34, NULL, &h36);
	h36.setPointers(NULL, &h35, NULL, &h37);
	h37.setPointers(NULL, &h36, NULL, &h38);
	h38.setPointers(NULL, &h37, NULL, &h39);
	h39.setPointers(NULL, &h38, NULL, &h6);
	h40.setPointers(NULL, &h39, &CL109, &h9);
	h41.setPointers(NULL, &h40, NULL, &h40);
	h42.setPointers(&CL105, NULL, NULL, &h41);

	CL110.setPointers(NULL, &h1, NULL, NULL);
	CL112.setPointers(NULL, NULL, &h5, NULL);
	CL105.setPointers(NULL, NULL, &h42, NULL);
	CL109.setPointers(&h40, NULL, NULL, NULL);
	CL115.setPointers(NULL, NULL, &h37, NULL);
	CL125.setPointers(NULL, NULL, NULL, &h30);
	CL126.setPointers(NULL, &h29, NULL, NULL);
	CL127.setPointers(NULL, NULL, NULL, &h28);
	CL128.setPointers(NULL, NULL, NULL, &h26);
	CL130.setPointers(NULL, NULL, NULL, &h24);
	CL135.setPointers(NULL, NULL, &h17, NULL);
	CL135_4.setPointers(NULL, NULL, &h18, NULL);
	CL136.setPointers(NULL, NULL, &h15, NULL);

	std::string endStr;

	if (end == "CL 105")
	{
		endStr = "CL105";
	}
	else if (end == "CL 109")
	{
		endStr == "CL109";
	}
	else if (end == "CL 110")
	{
		endStr = "CL110";
	}
	else if (end == "CL 112")
	{
		endStr = "CL112";
	}
	else if (end == "CL 115")
	{
		endStr = "CL115";
	}
	else if (end == "CL 125")
	{
		endStr = "CL125";
	}
	else if (end == "CL 126")
	{
		endStr = "CL126";
	}
	else if (end == "CL 127")
	{
		endStr = "CL127";
	}
	else if (end == "CL 128")
	{
		endStr = "CL128";
	}
	else if (end == "Cl 130")
	{
		endStr = "CL130";
	}
	else if (end == "CL 135")
	{
		endStr = "CL135";
	}
	else if (end == "CL 135.4")
	{
		endStr = "CL135_4";
	}
	else if (end == "CL 136")
	{
		endStr = "CL136";
	}

	if (start == "CL 105")
	{
		CL105.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 109")
	{
		CL109.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 110")
	{
		CL110.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 112")
	{
		CL112.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 115")
	{
		CL115.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 125")
	{
		CL125.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 126")
	{
		CL126.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 127")
	{
		CL127.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 128")
	{
		CL128.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 130")
	{
		CL130.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 135")
	{
		CL135.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 135.4")
	{
		CL135_4.beginSearchFor(endStr, searchOrder, names);
	}
	else if (start == "CL 136")
	{
		CL136.beginSearchFor(endStr, searchOrder, names);
	}
}
