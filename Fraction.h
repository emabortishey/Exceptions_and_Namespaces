#pragma once
#include <iostream>
#include "Exception.h"
using namespace std;

namespace user_fraction
{
	class Fraction
	{
	private:
		int num, den;
	public:
		void set_num(int num1)
		{
			num = num1;
		}
		void set_den(int den1)
		{
			if (den1 == 0)
			{
				throw InvalidArgument("\n\nDenomenator can't possibly be 0!\n\n");
			}
			den = den1;
		}
		int get_num()
		{
			return num;
		}
		int get_den()
		{
			return den;
		}
		void sum(int sumn, int sumd);
		void sub(int subn, int subd);
		void div(int divn, int divd);
		void mult(int multn, int multd);
	};

}