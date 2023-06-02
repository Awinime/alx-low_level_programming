#include <stdlib.h>
#include "lists.h"

/**
list_len - numb of elements in a linked list is returned
 * @h: the list_t list pointer
 *
 * Return:returns numb of elements in h
 */
size_t list_len(const list_t *h)
{
 size_t n = 0;

 while (h)
 {
 n++;
 h = h->next;
 }
 return (n);
}
