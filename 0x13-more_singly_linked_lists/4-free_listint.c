#include "lists.h"

/**
* @head: it is the listint_t list to be freed
* free_listint - a linked list is freed
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
