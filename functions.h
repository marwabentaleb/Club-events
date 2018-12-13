#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> 

using namespace std;

inline bool is_digit(char c) { return !isdigit(c); }

inline bool is_number(const string  s)
{
    return (find_if(s.begin(), s.end(), is_digit) == s.end() );
}

inline int check_date_from(string date){

	// getting : 
	// 	+1 : the date existe 
	//	-1 : the input given doesn't respect the form DD/MM/AAAA

	int statut = 1; 

	// check the size
	if (date.size() != 10){statut = -1;}

	// check the existence of "/" in the correct position
	if ((date[2] =! "/") or (date[5] =! "/")){statut = -1;}

	// check the month
	if(is_number(date.substr(3,2)) == 0){
		statut = -1;
	}else{
		if ((atoi(date.substr(3,2).c_str()) > 12 ) or (atoi(date.substr(3,2).c_str()) == 0 )){
			statut = -1;
		}
	}

	// check the year 
	if(is_number(date.substr(6,4)) == 0){
		statut = -1;
	}

	//check the day
	if(is_number(date.substr(0,2)) == 0){
		statut = -1;
	}else{
		if ((atoi(date.substr(0,2).c_str())==0) or (atoi(date.substr(0,2).c_str())>31)){statut = -1;}
	}
	
	return statut;
}


#endif
