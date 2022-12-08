# 0x17. C - Doubly linked lists :sunglasses:
## Resources
[Introduction to doubly linked list](https://www.youtube.com/watch?v=nquQ_fYGGA4)
## Tasks
### 1. List length
Write a function that prints all the elements of a `dlistint_t` list.
	- Prototype: `size_t print_dlistint(const dlistint_t *h);`
	- Return: the number of nodes
	- Format: see example
```
tountoun@ubuntu:~/0x17. Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
tountoun@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
9
8
-> 2 elements
tountoun@ubuntu:~/0x17. Doubly linked lists$ 
```
### 2. Add node
Write a function that returns the number of elements in a linked `dlistint_t` list.
	- Prototype: `size_t dlistint_len(const dlistint_t *h;`
```
tountoun@ubuntu:~/0x17. Doubly linked lists$ cat 1-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
tountoun@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
tountoun@ubuntu:~/0x17. Doubly linked lists$ ./b 
-> 2 elements
tountoun@ubuntu:~/0x17. Doubly linked lists$ 
```
### 3. Add node at the end
### 4. Free list
### 5. Get node at index
### 6. Sum list
### 7. Insert at index
### 8. Delete at index
### 9. Crackme4
### 10. Palindromes
### 11. Crackme5
