#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 02;
	day = 29;
	year = 2000;
	printf("Date: %02d/%02d/%04d\n", month, day, year);
	day = convert_day(month, day);
	printf("I am from the function convert_day, based on your month of and day of this month I can give how  many days you are passed from this year.and it is :%d\n", day);
	print_remaining_days(month, day, year);
	return (0);
}
