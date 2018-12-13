#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

#include "class_booking.h"
#include "class_person.h"
#include "functions.h"
#include "class_evening_room.h"

using namespace std;

int main() 
{
	// Test ....
	chief chief1(0,"marwa","bta",100);
	cout << chief1.getId() << " - " << chief1.getFirst_name() << " - " << chief1.getLast_name() << " - " <<chief1.getPrice()<< endl;
	int existence;
	existence = chief1.checkExistence("10/01/2018");

	if (existence == 0){chief1.addDate("10/01/2018");}


	cout   << chief1.getListDate(0) << endl;
	
	
	cout << "********** " << endl;
	evening_room evening_room1(0, "Makram", 200, 2500, "ON", 1500);

	cout << evening_room1.getName() << " - " <<evening_room1.getArea() << " m2"<< " - " <<evening_room1.getCapacity() << " - " << evening_room1.getWifi() 
	<< " - " << evening_room1.getPrice() << " EUR" << endl;

	cout << "********** " << endl;
	customer customer1(0, "first_name", "last_name",
	 	"email_customer", "address_custome",
	 	"0614898317");
	cout << customer1.getTel_client() << endl;

	booking booking1(0, &customer1, "13/12/2018", "samir Sankou7", 2000, "DJ costa", &evening_room1);
	customer* it = booking1.getPt_customer();
	evening_room* it1 = booking1.getPt_evening_room();
	cout << booking1.getId_res() << " - " << booking1.getBooking_date() << " - " << it->getFirst_name()<< " - " << booking1.getName_chief()
	<< " - " << booking1.getNumber_of_guests() << " - " << booking1.getName_DJ() << " - " << it1->getName()<<endl;


	// ....
	return 0;
}
