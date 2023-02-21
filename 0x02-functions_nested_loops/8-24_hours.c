#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer, 00:00 to 23:59
 *
 * Return: Always 0.
 */
void jack_baur(void)
{
	int hour, minute;

	hour = 0;

	while (hour <= 23)
	{
		while (minute <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
			minute++;
		}

		hour++;
	}
}
