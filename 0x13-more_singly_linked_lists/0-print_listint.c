#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to the list
 * Return: the number of elements/nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 1;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
