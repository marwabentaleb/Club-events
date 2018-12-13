#ifndef CLASS_BOOKING_H
#define CLASS_BOOKING_H

#include <iostream>
#include <string>
#include <vector>

#include "class_person.h"
#include "functions.h"
#include "class_evening_room.h"

using namespace std;

class booking{
public:
	booking(){};
	booking(int id_res, customer* pt_customer, string booking_date, string name_chief,
		int number_of_guests, string name_DJ, evening_room* pt_evening_room);
	~booking(){};

	int getId_res(){return(this->id_res);};
	void setId_res(int id_res){this->id_res = id_res;};

	string getBooking_date(){return(this->booking_date);};
	void setBooking_date(string booking_date){this->booking_date = booking_date;};

	customer* getPt_customer(){return(this->pt_customer);};
	void setPt_customer(customer* pt_customer){this->pt_customer = pt_customer;};

	string getName_chief(){return(this->name_chief);};
	void setName_chief(string name_chief){this->name_chief = name_chief;};

	int getNumber_of_guests(){return(this->number_of_guests);};
	void setNumber_of_guests(int id_res){this->number_of_guests = number_of_guests;};

	string getName_DJ(){return(this->name_DJ);};
	void setName_DJ(string name_DJ){this->name_DJ = name_DJ;};

	evening_room* getPt_evening_room(){return(this->pt_evening_room);};
	void setPt_evening_room(evening_room* pt_evening_room){this->pt_evening_room = pt_evening_room;};

private:
	int id_res;
	customer* pt_customer;
	string booking_date;
	string name_chief; // contains the name of the chief or "-" which means that the costumer doesn't choose one of ours
	int number_of_guests;
	string name_DJ; 
	evening_room* pt_evening_room;
};
#endif
