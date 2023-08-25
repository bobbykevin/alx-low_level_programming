0x12. C - Singly linked lists

Assessment Items ✔️

**Testing:**
- Testing Directory: This directory serves the purpose of containing test-related materials.

**Header File 📁:**
- File: lists.h
- Description: This header file includes definitions and prototypes for all the functions and types developed for the project.

**Type / File**	**Definition / Prototype**
- `struct list_s`
    - `char *str`
    - `unsigned int len`
    - `struct list_s *next`
- `typedef list_t struct list_s`
- File: 0-print_list.c
- Function: `size_t print_list(const list_t *h)`
    - Description: This C function prints all elements present in a list_t linked list.
    - If the `str` element is `NULL`, the function displays `[0] (nil)`.

- File: 1-list_len.c
- Function: `size_t list_len(const list_t *h)`
    - Description: This C function calculates and returns the count of elements in a linked list_t list.

- File: 2-add_node.c
- Function: `list_t *add_node(list_t **head, const char *str)`
    - Description: This C function adds a new node at the beginning of a list_t list.
    - If the operation fails, it returns `NULL`.
    - Otherwise, it returns the address of the new element.

- File: 3-add_node_end.c
- Function: `list_t *add_node_end(list_t **head, const char *str)`
    - Description: This C function appends a new node at the end of a linked list_t list.
    - If the operation fails, it returns `NULL`.
    - Otherwise, it returns the address of the new element.

- File: 4-free_list.c
- Function: `void free_list(list_t *head)`
    - Description: This C function releases the memory occupied by a list_t list.

- Task List 📃:
  1. **Print List (Task 0)**
     - File: 0-print_list.c
     - Description: A C function that prints all elements within a list_t list.
       - If `str` is `NULL`, the function prints `[0] (nil)`.

  2. **List Length (Task 1)**
     - File: 1-list_len.c
     - Description: A C function that calculates and returns the count of elements in a linked list_t list.

  3. **Add Node (Task 2)**
     - File: 2-add_node.c
     - Description: A C function that inserts a new node at the beginning of a list_t list.
       - Returns `NULL` on failure; otherwise, returns the new element's address.

  4. **Add Node at End (Task 3)**
     - File: 3-add_node_end.c
     - Description: A C function that appends a new node at the end of a linked list_t list.
       - Returns `NULL` on failure; otherwise, returns the new element's address.

  5. **Free List (Task 4)**
     - File: 4-free_list.c
     - Description: A C function that deallocates memory associated with a list_t list.

  6. **The Hare and the Tortoise (Task 5)**
     - File: 100-first.c
     - Description: A C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the `main` function is executed.

  7. **Real Programmers and Assembly (Task 6)**
     - File: 101-hello_holberton.asm
     - Description: A 64-bit assembly program that utilizes the `printf` function without interrupts to print "Hello, Holberton" followed by a newline.
