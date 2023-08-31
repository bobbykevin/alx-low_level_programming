#include "lists.h"

/**
 * get_nodeint_at_index - Get a node at a specified index in a linked list.
 * @head: Pointer to the first node.
 * @index: Index of the desired node.
 *
 * Return: Pointer to the node, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int position = 0;

	while (current != NULL && position < index)
	{
		current = current->next;
		position++;
	}

	if (current != NULL)
		return (current);

	return (NULL);
}
