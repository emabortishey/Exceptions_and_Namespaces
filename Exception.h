#pragma once
#include <iostream>

using namespace std;

// ПНДХРЕКЭЯЙХИ ЙКЮЯЯ НЬХАЙХ АЕГ ЮРПХАСРНБ
class Exception {
public:
	virtual string what() noexcept { return "\n\nSome error occurred!\n\n"; }
};

/////// йкюяяш дкъ оепбнцн гюдюмхъ я 22 бярпевх /////
// 
/////// мювюкн
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

/////// йнмеж



/// нярюкэмше днвепмхе йкюяяш дкъ брнпнцн гюдюмхъ 22 бярпевх ///

// мебнглнфмнярх опхбедемхъ сйюгюрекэ\яяшкйс б нопедекеммши рхо

class BadCast : public Exception
{
	string msg;
public:
	explicit BadCast(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// ньхайх бнгмхйьхе бн бпелъ гюосяйю опнцпюллш

class RunTimeError : public Exception
{
	string msg;
public:
	RunTimeError() : msg{ "\nSome runtime error just occurred!\n" } { };
	explicit RunTimeError(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// бшунд гю бепумчч цпюмхжс дхюоюгнмю. днвепмхи нр пюмрюилю

class OverFlowError : public RunTimeError
{
	string msg_1;
public:
	explicit OverFlowError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// бшунд гю мхфмчч цпюмхжс дхюоюгнмю. днвепмхи нр пюмрюилю

class UnderFlowError : public RunTimeError
{
	string msg_1;
public:
	explicit UnderFlowError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// кнцхвеяйхе ньхайх

class LogicError : public Exception
{
	string msg;
public:
	LogicError() : msg{ "\nSome logic error just occurred!\n" } { };
	explicit LogicError(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// мейнппейрмши онксвемши юпцслемр. днвепмхи нр кнцхв. ньханй

class InvalidArgument : public LogicError
{
	string msg_1;
public:
	explicit InvalidArgument(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// гмювемхе бме дхюоюгнмю йнмреимепю. днвепмхи нр кнцхв. ньханй

class OutOfRange : public LogicError
{
	string msg_1;
public:
	explicit OutOfRange(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// пюанрю я тюикюлх

class FileError : public Exception
{
	string msg;
public:
	FileError() : msg{ "\nSome file error just occurred!\n" } { };
	explicit FileError(string msg_P) : msg{ msg_P } { };

	virtual string what() noexcept override { return msg; }
};

// ньхайю опх нрйпшрхх тюикю. днвепмхи нр йкюяяю тюикнбшу ньханй

class OpenFileError : public FileError
{
	string msg_1;
public:
	explicit OpenFileError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};

// ньхайю опх гюйпшрхх тюикю. днвепмхи нр йкюяяю тюикнбшу ньханй

class CloseFileError : public FileError
{
	string msg_1;
public:
	explicit CloseFileError(string msg_P) : msg_1{ msg_P } { };

	virtual string what() noexcept override { return msg_1; }
};