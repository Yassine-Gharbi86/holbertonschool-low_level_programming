#include "3-calc.h"
/**
* op_add - Adds two numbers
* @a: First number
* @b: Second number
*
* Return: The sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_div - Divides two numbers
* @a: First number
* @b: Second number
*
* Return: The result of a divided by b
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - Calculates the remainder of two numbers
* @a: First number
* @b: Second number
*
* Return: Remainder of a divided by b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
/**
 * op_sub - Subtracts two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Multiplies two numbers
* @a: First number
* @b: Second number
*
* Return: The product of a and b
*/
int op_mul(int a, int b)
{
return (a * b);
}
