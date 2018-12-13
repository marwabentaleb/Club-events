#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

#include "class_person.h"
//#include "functions.h"

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

chief::chief(int id, string first_name, string last_name, float price){
	this->id = id;
	this->first_name = first_name;
	this->last_name = last_name;
	vector<string> empty_vector;
	this->list_date_taken = empty_vector;
	this->price = price;
}

int chief::checkExistence(string date){

	// getting : 
	// 	+1 : the date existe 
	//	-1 : the input given doesn't respect the form DD/MM/AAAA
	//	 0 : the date doesn't existe in the table

	int statut = 1; 

	// check the size
	if (date.size() != 10){statut = -1;}

	// check the existence of "/" in the correct position
	if ((date[2] =! "/") or (date[5] =! "/")){statut = -1;}

	// check the month
	//if(is_number(date.substr(3,2)) == 0){
		//statut = -1;
	//}else{
		//cout << "ok" << endl;
	//}
	
	// check the year 
	//check the day 
	// check if existe
	if (statut == 1){
		cout << "ok" << endl;


	}


	return statut;
}
