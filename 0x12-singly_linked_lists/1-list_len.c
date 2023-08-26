#include <stdlib.h>
#include "lists.h"

/**
 * list_len_custom - calculates the count of elements in a linked list
 * @head: pointer to the list_t list
 *
 * Return: the number of elements in the list
 */
size_t list_len_custom(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
