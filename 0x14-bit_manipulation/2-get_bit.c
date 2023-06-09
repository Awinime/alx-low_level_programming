#include "main.h"

/**
 * get_bit - returns value of bit at a given index numb in a decimal
 * @n: numb to be searched
 * @index: bit index
 *
 * Return: value of bit or return -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
