#pragma once
#include <iostream>
#include <string>
using namespace std;
class Packet_of_milk
{

public:
	void set_producer();
	void set_percent();
	void set_size();
	void set_cal();
	void set_pr();
	void set_col();
	void get_producer();
	void get_percent();
	void get_size();
	void get_cal();
	void get_pr();
	void get_col();
	Packet_of_milk();
	Packet_of_milk(string prod, int16_t per, string pack, int16_t ccal, string pr, string col);
	string producer;
	int16_t perc;
	string packsz;
	int16_t cal;
	~Packet_of_milk();
protected:
	string price;
	string colour;

};
