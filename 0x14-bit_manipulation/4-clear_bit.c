#include "main.h"

/**
 * clear_bit -  value of specific bit sets to  0
 * @index: index of bit to clear
 * @n: pointer to numb to change
*
 * Return: return 1 for , -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
