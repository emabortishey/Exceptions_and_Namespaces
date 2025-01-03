#pragma once
#include <iostream>
#include "Exception.h"
using namespace std;

// заключение класса в пространство имЄн
namespace user_fraction
{
	class Fraction
	{
	private:
		int num, den;
	public:
		void set_num(int num1) noexcept
		{
			num = num1;
		}
		void set_den(int den1)
		{
			// т.к. на 0 делить нельз€, при попытке передать 0 в аксессор
			// вылетает исключение о неверном переданном аргументе
			if (den1 == 0)
			{
				throw InvalidArgument("\n\nDenomenator can't possibly be 0!\n\n");
			}
			den = den1;
		}
		int get_num() noexcept
		{
			return num;
		}
		int get_den() noexcept
		{
			return den;
		}

		void sum(int sumn, int sumd) noexcept;
		void sub(int subn, int subd) noexcept;
		void div(int divn, int divd) noexcept;
		void mult(int multn, int multd) noexcept;
	};

}