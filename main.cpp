// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Realization.cpp"
using namespace std;

int main()
{
	Packet_of_milk A;
	Packet_of_milk B("Korowa",25,"0,75L",600,"3grn","white");
	Packet_of_milk C("Babka na bazari", 1, "2L", 9000, "18grn", "doesn't have any");
	A.set_cal();
	A.set_percent();
	A.set_producer();
	A.set_size();
	A.set_pr();
	A.set_col();

	A.get_cal();
	A.get_percent();
	A.get_producer();
	A.get_size();
	A.get_pr();
	A.get_col();


	B.get_cal();
	B.get_percent();
	B.get_producer();
	B.get_size();
	B.get_pr();
	B.get_col();

	C.get_cal();
	C.get_percent();
	C.get_producer();
	C.get_size();
	C.get_pr();
	C.get_col();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
