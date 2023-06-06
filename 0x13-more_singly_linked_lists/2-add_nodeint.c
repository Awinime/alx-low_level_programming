#include "lists.h"

/**
* add_nodeint - new node is added at the beginning of linked list
* @head : points to first node in  list
* @n: data to be inserted in a new node
*
* Return: returns pointer to new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
