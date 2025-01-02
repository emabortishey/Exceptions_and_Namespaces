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

class FileError : public Exception
{
	string msg;
public:
	explicit FileError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class BadCast : public Exception
{
	string msg;
public:
	explicit BadCast(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class RunTimeError : public Exception
{
	string msg;
public:
	explicit RunTimeError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class OverFlowError : public RunTimeError
{
	string msg;
public:
	explicit OverFlowError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class UnderFlowError : public RunTimeError
{
	string msg;
public:
	explicit UnderFlowError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class LogicError : public Exception
{
	string msg;
public:
	explicit LogicError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class InvalidArgument : public LogicError
{
	string msg;
public:
	explicit InvalidArgument(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class OutOfRange : public LogicError
{
	string msg;
public:
	explicit OutOfRange(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class FileError : public Exception
{
	string msg;
public:
	explicit FileError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class OpenFileError : public FileError
{
	string msg;
public:
	explicit OpenFileError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class CloseFileError : public FileError
{
	string msg;
public:
	explicit CloseFileError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};