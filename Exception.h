#pragma once
#include <iostream>

using namespace std;

// ������������ ����� ������ ��� ���������
class Exception {
public:
	virtual string what() noexcept { return "\n\nSome error occurred!\n\n"; }
};

/////// ������ ��� ������� ������� � 22 ������� /////
// 
/////// ������
class ContainerIsEmpty : public Exception
{
	string msg;
public:
	explicit ContainerIsEmpty(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

class WrongTydeid : public Exception
{
	string msg;
public:
	explicit WrongTydeid(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

/////// �����



/// ��������� �������� ������ ��� ������� ������� 22 ������� ///

// ������������� ���������� ���������\������ � ������������ ���

class BadCast : public Exception
{
	string msg;
public:
	explicit BadCast(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// ������ ��������� �� ����� ������� ���������

class RunTimeError : public Exception
{
	string msg;
public:
	RunTimeError() : msg{ "\nSome runtime error just occurred!\n" } { };
	explicit RunTimeError(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// ����� �� ������� ������� ���������. �������� �� ��������

class OverFlowError : public RunTimeError
{
	string msg_1;
public:
	explicit OverFlowError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// ����� �� ������ ������� ���������. �������� �� ��������

class UnderFlowError : public RunTimeError
{
	string msg_1;
public:
	explicit UnderFlowError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// ���������� ������

class LogicError : public Exception
{
	string msg;
public:
	LogicError() : msg{ "\nSome logic error just occurred!\n" } { };
	explicit LogicError(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// ������������ ��������� ��������. �������� �� �����. ������

class InvalidArgument : public LogicError
{
	string msg_1;
public:
	explicit InvalidArgument(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// �������� ��� ��������� ����������. �������� �� �����. ������

class OutOfRange : public LogicError
{
	string msg_1;
public:
	explicit OutOfRange(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// ������ � �������

class FileError : public Exception
{
	string msg;
public:
	FileError() : msg{ "\nSome file error just occurred!\n" } { };
	explicit FileError(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// ������ ��� �������� �����. �������� �� ������ �������� ������

class OpenFileError : public FileError
{
	string msg_1;
public:
	explicit OpenFileError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// ������ ��� �������� �����. �������� �� ������ �������� ������

class CloseFileError : public FileError
{
	string msg_1;
public:
	explicit CloseFileError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};