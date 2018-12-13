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

#endif
