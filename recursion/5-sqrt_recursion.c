#include "main.h"
#include <stdio.h>
/**
 *isqrt_rec - check the code
 *@n: variable
 *@k: variable
 * Return: raiz
 */
int isqrt_rec(long int k, int n)

{
	int next_k = (k + n / k) / 2;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	if (k * k <= n && (k + 1) * (k + 1) > n)
		return (k);
	else
		return (isqrt_rec(next_k, n));
}
/**
 *_sqrt_recursion - check the code
 *@n: variable
 * Return: raiz
 */
int _sqrt_recursion(int n)
{
	return (isqrt_rec(1, n));

}
