#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
{
unsigned int num = 0;
char *p = r;
int i = 0;
int j = 0;
int carry = 0;
long int length = 0;
long int rsiz = size_r;
for (; *(n1 + 1); i++)
{
	n1++;
}
for (; *(n2 + 1); j++)
{
	n2++;
}
if (j >= i)
	i = j;
length = i;
while (size_r)
{
	r++;
	size_r--;
}
for (; i; i--)
{
	num += (n2[i] - '0' + n1[i] - '0') % 10 + carry;
	carry = 0;
	if (n2[i] - '0' + n1[i] - '0' > 9)
		carry = 1;
}
if (length > rsiz)
	return (0);
else if (length == rsiz && carry == 1)
	return (0);
else
{
	for (; rsiz; rsiz--)
	{
		r[rsiz] = (num % 10) + '0';
		num -= num % 10;
	}
}
return (p);
}
