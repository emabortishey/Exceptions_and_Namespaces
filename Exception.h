#pragma once
#include <iostream>

using namespace std;

class Exception {
public:
	Exception() {};

	virtual string what() { return "\n\nSome error occurred!\n\n"; }
};

class ContainerIsEmpty : public Exception
{
	string msg;
public:
	explicit ContainerIsEmpty(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class WrongTydeid : public Exception
{
	string msg;
public:
	explicit WrongTydeid(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};