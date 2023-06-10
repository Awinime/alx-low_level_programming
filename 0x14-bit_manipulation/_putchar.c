#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: char to print
 *
 * Return: return 1 on success.
 * On error,return -1, and errno appropriately set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
