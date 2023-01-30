#include "lists.h"
#include <stdio.h>

/**
  * print_listint - function that prints all elements of a listint_t list
  * @h: head of the linked list
  * Return: the number of nodes of the linked list
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
