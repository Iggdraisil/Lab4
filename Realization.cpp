#include "pch.h"
#include <iostream>
#include "stdio.h"
#include "Header.h"
using namespace std;

	void Packet_of_milk::set_producer()
	{
		cin >> Packet_of_milk::producer;
	}

	void Packet_of_milk::set_percent()
	{
		cin >> Packet_of_milk::percent_of_oil;
	}

	void Packet_of_milk::set_size()
	{
		cin >> Packet_of_milk::pack_size;
	}

	void Packet_of_milk::set_cal()
	{
		cin >> Packet_of_milk::cal_number;
	}
	
	void Packet_of_milk::set_price()
	{
		cin >> Packet_of_milk::price;
	}

	void Packet_of_milk::set_colour()
	{
		cin >> Packet_of_milk::colour;
	}

	Packet_of_milk::Packet_of_milk(){}

	void Packet_of_milk::get_producer()
	{
		cout << Packet_of_milk::producer;
	}

	void Packet_of_milk::get_percent()
	{
		cout << Packet_of_milk::percent_of_oil;
	}

	void Packet_of_milk::get_size()
	{
		cout << Packet_of_milk::pack_size;
	}

	void Packet_of_milk::get_cal()
	{
		cout << Packet_of_milk::cal_number;
	}

	void Packet_of_milk::get_price()
	{
		cout << Packet_of_milk::price;
	}

	void Packet_of_milk::get_colour()
	{
		cout << Packet_of_milk::colour;
	}

	Packet_of_milk::Packet_of_milk(string producer, int16_t percent, string pack, int16_t cal, string price, string colour) :
		producer(producer),
		percent_of_oil(percent),
		pack_size(pack),
		cal_number(cal),
		price(price),
		colour(colour)
	{
	}


	Packet_of_milk::~Packet_of_milk() {}