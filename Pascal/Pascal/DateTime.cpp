#include "DateTime.h"

bool IsLeapYear(int year)
{
	return ((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0);
}

int DaysInYear(int year)
{
	return (IsLeapYear(year) == 1) ? 366 : 365;
}
