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
	
	string text = "12/20";
	
	cout << is_number(text.substr(3,2)) << " - " <<atoi(text.c_str())<< endl;
	return 0;
}
