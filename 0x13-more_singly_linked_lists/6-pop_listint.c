#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);

	int num = (*head)->n;          / Store the data of the head node
	listint_t *temp = (*head)->next; / Store the next node in a temporary pointer

	free(*head);                   / Free the head node
	* head = temp;                  / Move head to the next node

	return (num);                  / Return the data from the deleted node
}
