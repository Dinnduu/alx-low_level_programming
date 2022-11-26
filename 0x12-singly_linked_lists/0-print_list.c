#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to the singly linked list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		if (h->data == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->data);
		h = h->address;
		a++;
	}
	return (a);
}
