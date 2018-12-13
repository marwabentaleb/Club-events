#ifndef CLASS_EVENING_ROOM_H
#define CLASS_EVENING_ROOM_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

using namespace std;

class evening_room{
public:
	evening_room(){};
	evening_room(int id, string name, float area, int capacity, string wifi, float price);
	~evening_room(){};

	int getId(){return(this->id);};
	void setId(int id){this->id = id;};

	string getName(){return(this->name);};
	void setName(string){this->name = name;};

	float getArea(){return(this->area);};
	void setArea(float area){this->area = area;};

	int getCapacity(){return(this->capacity);};
	void setCapacity(int capacity){this->capacity = capacity;};

	string getWifi(){return (this->wifi);};
	void setWifi(string wifi){this->wifi = wifi;};

	float getPrice(){return(this->price);};
	void setPrice(float price){this->price = price;};

	int checkExistence(string date);

	string getListDate(int pos){
		if (pos < this->list_date.size()){
			return (this->list_date[pos]);
		}else{
			return ("ERROR");
		};
	}

	void addDate(string date){this->list_date.push_back(date);};
	
private:
	int id;
	string name;
	float area;
	int capacity;
	string wifi; // ON/OFF
	float price;
	vector<string> list_date; // accepted forme dd/mm/aaaa

};
#endif
