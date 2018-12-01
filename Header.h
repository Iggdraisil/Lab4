#pragma once
#include <string>
using namespace std;
class Packet_of_milk
{

public:
	void set_producer();
	void set_percent();
	void set_size();
	void set_cal();
	void set_price();
	void set_colour();
	Packet_of_milk();
	Packet_of_milk(string producer, int16_t percent, string pack_size, int16_t cal_number, string la, string col);
	void get_producer();
	void get_percent();
	void get_size();
	void get_cal();
	void get_price();
	void get_colour();
	~Packet_of_milk();
private:
	string producer;
	int16_t percent_of_oil;
	string pack_size;
	int16_t cal_number;
protected:
	string price;
	string colour;
};
