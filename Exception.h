#pragma once
#include <iostream>

using namespace std;

class Exception
{
public:
	Exception() {};

	string what() { return "\n\nSome error occurred!\n\n"; }
};

