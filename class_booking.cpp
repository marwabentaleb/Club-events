#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

#include "class_booking.h"
#include "functions.h"
#include "class_evening_room.h"
#include "class_person.h"

using namespace std;

booking::booking(int id_res, customer customer_tmp, string booking_date, string name_chief,
		 int number_of_guests, string name_DJ, evening_room evening_room_tmp){
	this->id_res = id_res;
	this->booking_date = booking_date;
	this->pt_customer = new customer;
	*(this->pt_customer) = customer_tmp;
	this->name_chief = name_chief;
	this->number_of_guests = number_of_guests;
	this->name_DJ = name_DJ;
	this->pt_evening_room = new evening_room;
	*(this->pt_evening_room) = evening_room_tmp;
}
