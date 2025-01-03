#include "Fraction.h"

void user_fraction::Fraction::sum(int sumn, int sumd) noexcept
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
void user_fraction::Fraction::sub(int subn, int subd) noexcept
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
void user_fraction::Fraction::div(int divn, int divd) noexcept
{
	int buff;

	buff = num;
	num = den;
	den = buff;

	num *= divn;
	den *= divd;
}
void user_fraction::Fraction::mult(int multn, int multd) noexcept
{
	num *= multn;
	den *= multd;
}

