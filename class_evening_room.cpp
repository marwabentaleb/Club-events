#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

#include "class_evening_room.h"
#include "functions.h"

using namespace std;


evening_room::evening_room(int id, string name, float area, int capacity, string wifi, float price){
	this->id = id;
	this->name = name;
	this->area = area;
	this->capacity = capacity;
	this->wifi = wifi;
	this->price = price;
	vector<string> empty_vector;
	this->list_date = empty_vector;
}

int evening_room::checkExistence(string date){

	// getting : 
	// 	+1 : the date existe 
	//	-1 : the input given doesn't respect the form DD/MM/AAAA
	//	 0 : the date doesn't existe in the table

	int statut= 1; 

	statut = check_date_from(date);

	// check if existe
	if (statut == 1){
		if (find(this->list_date.begin(), this->list_date.end(), date) == this->list_date.end()){
			statut = 0;
		}
	}
	return statut;
}
