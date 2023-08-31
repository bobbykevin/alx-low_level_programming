#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;          /* Declare a new node */
	listint_t *temp = *head;      /* Declare a temporary node pointer */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* Initialize the new node's data and next pointer */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head and return it */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the end of the list using the temporary pointer */
	while (temp->next)
		temp = temp->next;

	/* Add the new node at the end of the list */
	temp->next = new_node;

	return (new_node);
}

