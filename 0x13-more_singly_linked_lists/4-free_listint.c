#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next; / Store the next node in a temporary pointer
		free(head);        / Free the current node
		head = temp;       / Move head to the next node
	}
}
