#include "pch.h"
#include <iostream>
#include <string>
#include "stdio.h"
#include "Header.h"
#include "Realization.cpp"
using namespace std;

int main()
{
	Packet_of_milk A;
	Packet_of_milk B("Korowa", 25, "0,75L", 500, "25grn", "blue");
	Packet_of_milk C("Babka na bazari", 1, "2L", 9000, "18grn", "doesn't have any");
	A.set_cal();
	A.set_percent();
	A.set_producer();
	A.set_size();
	A.set_pr();
	A.set_col();
	cout << endl;

	cout << "first packet:"<< endl;
	A.get_cal();
	A.get_percent();
	A.get_producer();
	A.get_size();
	A.get_pr();
	A.get_col();
	cout << endl;

	cout << "second packet:" << endl;
	B.get_cal();
	B.get_percent();
	B.get_producer();
	B.get_size();
	B.get_pr();
	B.get_col();
	cout << endl;

	cout << "last packet:" << endl;
	C.get_cal();
	C.get_percent();
	C.get_producer();
	C.get_size();
	C.get_pr();
	C.get_col();

	

}

Packet_of_milk::~Packet_of_milk(){}