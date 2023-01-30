#include "lists.h"
#include <stdio.h>

/**
  * print_listint - function that prints all elements of a listint_t list
  * @h: head of the linked list
  * Return: the number of nodes of the linked list
  */

size_t print_listint(const listint_t *h)
{
	register int nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
