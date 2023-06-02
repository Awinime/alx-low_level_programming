#include <stdlib.h>
#include "lists.h"

/**
* @head: to be freed list_t list
* free_list - a linked list is freed
*/
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
