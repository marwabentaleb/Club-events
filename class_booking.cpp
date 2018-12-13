#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

#include "class_booking.h"
#include "functions.h"
#include "class_evening_room.h"

using namespace std;

booking::booking(int id_res, customer* pt_customer, string booking_date, string name_chief,
		 int number_of_guests, string name_DJ, evening_room* pt_evening_room){
	this->id_res = id_res;
	this->booking_date = booking_date;
	this->pt_customer = pt_customer;
	this->name_chief = name_chief;
	this->number_of_guests = number_of_guests;
	this->name_DJ = name_DJ;
	this->pt_evening_room = pt_evening_room;
}
