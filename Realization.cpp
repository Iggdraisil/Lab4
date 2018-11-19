#include "pch.h"
#include <iostream>
#include <string>
#include "stdio.h"
#include "Header.h"
using namespace std;
void Packet_of_milk::set_producer()
{
	cout << "Producer:";
	cin >> Packet_of_milk::producer;
}
void Packet_of_milk::set_percent()
{
	cout << "Percent of oil:";
	cin >> Packet_of_milk::perc;
}
void Packet_of_milk::set_size()
{
	cout << "Size of the packet:";
	cin >> Packet_of_milk::packsz;
}
void Packet_of_milk::set_cal()
{
	cout << "Number of calories:";
	cin >> Packet_of_milk::cal;
}

void Packet_of_milk::set_pr()
{
	cout << "Price:";
	cin >> Packet_of_milk::price;
}
void Packet_of_milk::set_col()
{
	cout << "Colour:";
	cin >> Packet_of_milk::colour;
}
void Packet_of_milk::get_producer()
{
	cout << "Producer:" << Packet_of_milk::producer << endl;
}
void Packet_of_milk::get_percent()
{
	cout << "Percent of oil:" << Packet_of_milk::perc << endl;
}
void Packet_of_milk::get_size()
{
	cout << "Size of the packet:" << Packet_of_milk::packsz << endl;
}
void Packet_of_milk::get_cal()
{
	cout << "Number of calories:" << Packet_of_milk::cal << endl;
}
void Packet_of_milk::get_pr()
{
	cout << "Price:" << Packet_of_milk::price << endl;
}
void Packet_of_milk::get_col()
{
	cout << "Colour:" << Packet_of_milk::colour << endl;
}
Packet_of_milk::Packet_of_milk(string prod, int16_t per, string pack, int16_t ccal, string pr, string col) :
	producer(prod),
	perc(per),
	packsz(pack),
	cal(ccal),
	price(pr),
	colour(col)
{
}
Packet_of_milk::Packet_of_milk() 

{
}