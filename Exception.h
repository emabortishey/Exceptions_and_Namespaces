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
	RunTimeError() : msg{ "\nSome runtime error just occurred!\n" } { };
	explicit RunTimeError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class OverFlowError : public RunTimeError
{
	string msg_1;
public:
	explicit OverFlowError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() { return msg_1; }
};

class UnderFlowError : public RunTimeError
{
	string msg_1;
public:
	explicit UnderFlowError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() { return msg_1; }
};

class LogicError : public Exception
{
	string msg;
public:
	LogicError() : msg{ "\nSome logic error just occurred!\n" } { };
	explicit LogicError(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class InvalidArgument : public LogicError
{
	string msg_1;
public:
	explicit InvalidArgument(string msg_P) : msg_1{ msg_P } { };

	virtual string what() { return msg_1; }
};

class OutOfRange : public LogicError
{
	string msg_1;
public:
	explicit OutOfRange(string msg_P) : msg_1{ msg_P } { };

	virtual string what() { return msg_1; }
};

class FileErrorr : public Exception
{
	string msg;
public:
	FileErrorr() : msg{ "\nSome file error just occurred!\n" } { };
	explicit FileErrorr(string msg_P) : msg{ msg_P } { };

	virtual string what() override { return msg; }
};

class OpenFileErrorr : public FileErrorr
{
	string msg_1;
public:
	explicit OpenFileErrorr(string msg_P) : msg_1{ msg_P } { };

	virtual string what() { return msg_1; }
};

class CloseFileErrorr : public FileErrorr
{
	string msg_1;
public:
	explicit CloseFileErrorr(string msg_P) : msg_1{ msg_P } { };

	virtual string what() { return msg_1; }
};