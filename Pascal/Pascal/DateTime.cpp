#include "DateTime.h"

bool IsLeapYear(int year)
{
	return ((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0);
}

int DaysInYear(int year)
{
	return (IsLeapYear(year) == 1) ? 366 : 365;
}


int SeconsInHours(int hours)
{
	return hours * 3600;
}

bool IsYearOfApocalypse(int year)
{
	return year == 1992 || year == 2005 || year == 2011;
}