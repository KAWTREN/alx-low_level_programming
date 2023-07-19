#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add-returns sum
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub- returns the difference
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_sub(int a, int b)
{
	int def;

	def = a - b;
	return (def);
}
/**
 * op_mul-returns the product
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div-returns the result of the division
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod-returns the remainder of the division
 * @a: integer
 * @b: integer
 * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
