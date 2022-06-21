#include "main.h"
#include <stdio.h>
/**
 *_sqrt_recursion  - check the code
 *@n: variable
 *@k: variable
 * Return: raiz
 */
int isqrt_rec(int k, int n)

{
	float next_k = (k + n / k) / 2;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	if (k * k <= n && (k + 1) * (k + 1) > n)
		return (k);
	else
		return (isqrt_rec(next_k, n));
}
int _sqrt_recursion(int n)
{
	return (isqrt_rec(1, n));

}
