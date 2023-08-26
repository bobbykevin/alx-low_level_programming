#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: This structure defines a node in a singly linked list
 * for the Holberton project.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - Prints the elements of a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h);

/**
 * list_len - Counts the number of nodes in a linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: A double pointer to the head of the list
 * @str: The string to be added in the new node
 * Return: A pointer to the new head of the list
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: A double pointer to the head of the list
 * @str: The string to be added in the new node
 * Return: A pointer to the new head of the list
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees the memory occupied by a list
 * @head: A pointer to the head of the list
 */
void free_list(list_t *head);

#endif /* LISTS_H */
