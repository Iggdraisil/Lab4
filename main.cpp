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
	A.set_price();
	A.set_colour();

	A.get_cal();
	A.get_percent();
	A.get_producer();
	A.get_size();
	A.get_price();
	A.get_colour();


	B.get_cal();
	B.get_percent();
	B.get_producer();
	B.get_size();
	B.get_price();
	B.get_colour();

	C.get_cal();
	C.get_percent();
	C.get_producer();
	C.get_size();
	C.get_price();
	C.get_colour();

}
