#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 0  && day >= 1)
		{
			day++;
		}

		day -= 1;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
		/* C programming counts from zero so minus 1 from day */
	}
	else
	{
		if (month > 0 && day >= 1)
		{
			day++;
		}

		day -= 1;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
