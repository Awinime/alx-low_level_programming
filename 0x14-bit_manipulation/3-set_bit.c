#include "main.h"

/**
 * @n: pointer to numb to change
 * @index:  bit index to be set to 1
* set_bit - sets a bit at specific index to 1
 *
 * Return: return  1 , -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
