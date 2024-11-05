#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int sum1 = 0;
int sum2 = 0;
while (i < size)
{
sum1 += a[i];
sum2 += a[size - i - 1];
i += size + 1;
}
printf("%d, %d\n", sum1, sum2);
}
