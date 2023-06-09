#include "main.h"

/**
* @n: first numb
 * @m: second numb
 * flip_bits - counts numb of bits to change
 * to get from one numb to another
*
 * Return: numb of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
