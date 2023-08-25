#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
    size_t node_count = 0;  // To keep track of the number of nodes

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        h = h->next;
        node_count++;
    }

    return node_count;
}

int main(void)
{
    // Example usage
    list_t node1 = {"Hello", 5, NULL};
    list_t node2 = {"World", 5, NULL};
    list_t node3 = {NULL, 0, NULL};

    node1.next = &node2;
    node2.next = &node3;

    size_t nodes_printed = print_list(&node1);
    printf("Number of nodes printed: %zu\n", nodes_printed);

    return 0;
}

