#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: pointer to the sinngly linked list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
