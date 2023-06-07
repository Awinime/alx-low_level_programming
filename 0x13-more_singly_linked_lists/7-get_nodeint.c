#include "lists.h"

/**
* @head: the first node in the linked list
* @index: return index of the node
* get_nodeint_at_index - a node at a particular index in linked list returned
 *
* Return: pointer to node being searched for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
