#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, num, check, second_digit, keep_track;

	for (i = 0; i < 10; i++)
	{
		check = 0;
		num = 47;
		keep_track = 0;
		while (keep_track < 5)
		{
			if (num == 57)
			{
				check = 1;
				num = 47;
				second_digit = 49;
				keep_track = 0;
			}
			num++;
			if (check == 1)
			{
				_putchar(second_digit);
				keep_track++;
			}
			_putchar(num);
		}
		_putchar('\n');
	}

}
