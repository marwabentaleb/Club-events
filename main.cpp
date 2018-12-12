#include <iostream>
#include <string>

#include "class_person.h"


using namespace std;

int main() 
{
	
	customer customer1(0, "marwa" , "bta","btamarwa@gmail.com","34 Rue victor basch","06 14 89 83 17");
	
cout <<"id : " << customer1.getId() << " - nom : "<< customer1.getFirst_name() << " " << customer1.getLast_name() << " email : " << customer1.getEmail_customer() << " adress : " << customer1.getAddress_custome() << " tel : " <<customer1.getTel_client() << endl;

	return 0;
}
