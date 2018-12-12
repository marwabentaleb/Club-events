#include <iostream>
#include <string>
#include <vector>

#include "class_person.h"
using namespace std;

person::person(int id, string first_name, string last_name){
	this->id = id;
	this->first_name = first_name;
	this->last_name = last_name;
}

customer::customer(int id, string first_name, string last_name,
	 string email_customer, string address_custome,
	 string tel_client){
	this->id = id;
	this->first_name = first_name;
	this->last_name = last_name; 
	this->email_customer = email_customer;
	this->address_custome = address_custome;
	this->tel_client = tel_client;
}


