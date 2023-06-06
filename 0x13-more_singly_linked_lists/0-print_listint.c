#include "lists.h"

/**
*@h: type listint_t linked list to be printed
print_listint - all the elements of linked list is printed
*
* Return: number of nodes to be returned
*/
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
