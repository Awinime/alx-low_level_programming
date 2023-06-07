#include "lists.h"

/**
* pop_listint - this will delete head node of linked list
* @head: first element pointer in the linked list
*
* Return: deleted data inside elements,
* or if list is empty 0
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
