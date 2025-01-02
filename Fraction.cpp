#include "Fraction.h"

void user_fraction::Fraction::sum(int sumn, int sumd)
{
	if (den != sumd)
	{
		int buffd = den;

		num *= sumd;
		den *= sumd;

		sumn *= buffd;
	}

	num += sumn;
}
void user_fraction::Fraction::sub(int subn, int subd)
{
	if (den != subd)
	{
		int buffd = den;

		num *= subd;
		den *= subd;

		subn *= buffd;
	}

	num -= subn;
}
void user_fraction::Fraction::div(int divn, int divd)
{
	int buff;

	buff = num;
	num = den;
	den = buff;

	num *= divn;
	den *= divd;
}
void user_fraction::Fraction::mult(int multn, int multd)
{
	num *= multn;
	den *= multd;
}

