#include <stdio.h>
/**
 * print_fizz_buzz - Prints the Fizz-Buzz sequence.
 *
 * Prints the numbers from 1 to 100, followed by a new line.
 * For multiples of three, prints "Fizz" instead of the number.
 * For multiples of five, prints "Buzz" instead of the number.
 * For numbers which are multiples of both three and five, prints "FizzBuzz".
 *
 * Returns: void
 */
void print_fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
/**
 * main - Entry point
 *
 * Calls the print_fizz_buzz function to print the Fizz-Buzz sequence.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_fizz_buzz();
return (0);
}
