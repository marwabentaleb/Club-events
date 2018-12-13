#ifndef CLASS_PERSON_H
#define CLASS_PERSON_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// mother class
class person{
public:
	person(){};
	person(int id, string first_name, string last_name);
	~person(){};
	int getId() const { return this->id;}
	void setId(int id){
		this->id = id;
	}

	string getFirst_name() const { return this->first_name;}
	void setFirst_name(string first_name){
		this->first_name = first_name;
	}

	string getLast_name() const { return this->last_name;}
	void setLast_name(string last_name){
		this->last_name = last_name;
	}

	int checkExistence(string date);
	
	string getListDate(int pos){
		if (pos < this->list_date.size()){
			return (this->list_date[pos]);
		}else{
			return ("ERROR");
		};
	}
	void addDate(string date){this->list_date.push_back(date);};

protected:
	int id;
	string first_name;
	string last_name;
	vector<string> list_date; // accepted forme dd/mm/aaaa
};

// customer class
class customer : public person{
public:
	customer(){};
	~customer(){};
	customer(int id, string first_name, string last_name, string email_customer,
		 string address_custome, string tel_client);
	string getEmail_customer() const { return this->email_customer;}
	void setEmail_customer(string email_customer){
		this->email_customer = email_customer;
	}

	string getAddress_custome() const { return this->address_custome;}
	void setAddress_custome(string address_custome){
		this->address_custome = address_custome;
	}

	string getTel_client() const { return this->tel_client;}
	void setTel_client(string tel_client){
		this->tel_client = tel_client;
	}
private:
	string email_customer;
	string address_custome;
	string tel_client;
};

// Chief class

class chief : public person{
public:
	chief(){};
	~chief(){};
	chief(int id, string first_name, string last_name, float price);
	void setPrice(float price){this->price = price;};
	float getPrice(){return(this->price);};
	
private:
	float price;
};

// DJ class

class DJ : public person{
public:
	DJ(){};
	~DJ(){};
	DJ(int id, string first_name, string last_name, float price_evening);
	float getPrice_evening(){return (this->price_evening);};
	void setPrice_evening(float price_evening){this->price_evening = price_evening;};

private:
	float price_evening;
};

#endif
