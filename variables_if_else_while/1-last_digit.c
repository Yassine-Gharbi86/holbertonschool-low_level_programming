#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);
	if (n % 10 > 5)
{printf("and is greater than 5");
}
if (n % 10 == 0)
{printf("and is 0");
}
if (n % 10 < 6 && n % 10 != 0)
{printf("and is less than 6 and not 0");
}
return (0);
}