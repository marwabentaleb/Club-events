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
protected:
	int id;
	string first_name;
	string last_name;
};

// customer class
class customer : public person{
public:
	customer(){};
	~customer(){};
	customer(int id, string first_name, string last_name, string email_customer, string address_custome, string tel_client);
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

//class chief : public person{
//public:
	//chief(){};
	//~chief(){};
	//chief(int id, string first_name, string last_name, vector<string> list_date_taken, float price);
//private:
	//float price;
	//vector<string> list_date_taken;
	
//}

// DJ class













#endif
