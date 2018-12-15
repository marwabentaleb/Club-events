#include <iostream>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <vector>
#include <algorithm> 
#include <fstream>

#include "class_booking.h"
#include "class_person.h"
#include "functions.h"
#include "class_evening_room.h"

// A class to read data from a csv file.
class CSVReader
{public:
	const char* fileName;
	string delimeter;

public:
	CSVReader(const char* file, string delm= "\t"){
		fileName = file;
		delimeter = delm;
	}
	vector< vector<string> > getData();
};

vector< vector<string> > CSVReader::getData(){
	
	ifstream file(fileName);
	string line = "";
	int n;
	vector< vector<string> > dataList;
	while (getline(file, line)){
		vector<string> vec;
		n = line.length();
		char str[n+1];
		strcpy(str, line.c_str());
		char * pch;
	  	pch = strtok (str,"\t ");
	  	while (pch != NULL){
			vec.push_back(pch);
		    	pch = strtok (NULL, "\t");
  		}
		dataList.push_back(vec);
	}
	// Close the File
	file.close();
	return dataList;
}

using namespace std;

int main() 
{
	// List of days ...
	vector<string> List_of_days;

	// List of clients ...
	vector<person> List_of_clients;

	// List of rooms ...
	vector<evening_room> List_of_rooms;

	// List of Chiefs ...
	vector<chief> List_of_chiefs;

	// List of DJs ...
	vector<DJ> List_of_DJs;

	// List of reservations ...
	vector<booking> List_of_reservations;

	// Initialization of List_of_DJs
	string data_DJ_price_tmp = "./dataset/DJ_price.csv";
	const char* data_DJ_price = data_DJ_price_tmp.c_str();
	
	CSVReader reader_DJ(data_DJ_price);
	vector< vector<string> > dataList = reader_DJ.getData();
	dataList.erase(dataList.begin());
	
	for(int i=0; i< dataList.size(); i++){
		DJ DJ_tmp(i, "first_name_DJ" + dataList[i][0], "last_name_DJ" + dataList[i][0], strtof((dataList[i][1]).c_str(),0));
		List_of_DJs.push_back(DJ_tmp);
	}

	// Initialization of List_of_chiefs
	string data_price_food_unit_tmp = "./dataset/price_food_unit.csv";
	const char* data_price_food_unit = data_price_food_unit_tmp.c_str();
	CSVReader reader_Chief(data_price_food_unit);
	vector< vector<string> > dataList_chief = reader_Chief.getData();
	dataList_chief.erase(dataList_chief.begin());
	
	for(int i=0; i< dataList_chief.size(); i++){
		chief Chief_tmp(i, "first_name_chief" + dataList_chief[i][0], "last_name_chief" + dataList_chief[i][0], strtof((dataList_chief[i][1]).c_str(),0));
		List_of_chiefs.push_back(Chief_tmp);
	}
	for(int i = 0; i< dataList_chief.size(); i++){
		cout << List_of_chiefs[i].getFirst_name() << "\t" << List_of_chiefs[i].getLast_name() << "\t" << List_of_chiefs[i].getPrice() << endl;
	}
	

	// Initialization of List_of_days
	string data_daily_price_rental_tmp = "./dataset/daily_price_rental.csv";
	const char* data_daily_price_rental = data_daily_price_rental_tmp.c_str();
	CSVReader reader_daily_price_rental(data_daily_price_rental);
	vector< vector<string> > dataList_daily_price_rental = reader_daily_price_rental.getData();
	int nb_days = dataList_daily_price_rental[0].size();
	cout << "days : " << nb_days << endl;
	// Simulation by day
	
	
	
	/*string item;
	string action;
	bool stop = false;
	do{
	i++;
	cout << "What do you want to do ? <<add>> or <<remove>>" << endl;
	cin >> action;
	cout << "what do you wante to " << action << " ? <<costumer>>, <<evening room>>, <<chief>> or <<DJ>>" << endl;
	cin >> item;
	cout << "EVERYTHING IS FINE !!!! " << endl;
	if (i == 3){stop = true;}
	}while(stop == false);
	cout << "i : " << i << endl;*/

	
	cout << "ALL is FINE" << endl;

	return 0;
}
