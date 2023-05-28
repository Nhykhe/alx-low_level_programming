#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and print how many dsys are
 * left in the year, taking leap year into account
 * @month - month in number format(1 - 12)
 * @day - day of month(1 - 31)
 * @year - year(greater than 0)
 *
 * Description: determines how many days are remaining in a year, prints
 * this values along with the strig indicating the month and the day.
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}
		printf("Day of the year : %d\n", day);
		printf("Remaining days : %d\n", 365 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("invalid date : %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year : %d\n", day);
				printf("Remaining days : %d\n", 365 - day);
		}
	}
}
