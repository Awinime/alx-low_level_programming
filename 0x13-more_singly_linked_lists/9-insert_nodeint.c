#include "lists.h"

/**
 * insert_nodeint_at_index - a new node in a linked list is inserted,
 * at a specific position
 * @head: first node pointer in the list
 * @idx: the index of where new node is to be added
 * @n: data in new node to be inserted
 *
 * Return: return pointer to new node, or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
