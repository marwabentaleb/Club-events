#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

#include "class_person.h"
#include "functions.h"

using namespace std;

int main() 
{
	
	chief chief1(0,"marwa","bta",100);
	cout << chief1.getId() << " - " << chief1.getFirst_name() << " - " << chief1.getLast_name() << " - " <<chief1.getPrice()<< endl;
	int existence;
	existence = chief1.checkExistence("10/01/2018");

	if (existence == 0){chief1.addDate("10/01/2018");}


	cout   << chief1.getListDate(0) << endl;
	



	return 0;
}
