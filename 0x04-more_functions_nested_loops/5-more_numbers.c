#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, num, check, second_digit, int keep_track;

	for (i = 0; i < 10; i++)
	{
		check = 0;
		num = 48;
		keep_track = 0;
		while (keep_track != 53)
		{
			_putchar(num);
			num++;
			if (num == 57)
			{
				check = 1;
				num = 48;
				second_digit = 49;
				keep_track = 49;
			}
			if (check == 1)
			{
				_putchar(second digit);
				keep_track++;
			}
		}
	}

}
