#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specified index.
 * @head: Pointer to the pointer to the first node in the linked list.
 * @index: Index at which to insert the new node.
 * @n: Value to be assigned to the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int position = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && position < index - 1)
	{
		current = current->next;
		position++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
