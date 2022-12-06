#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the header node
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;
	listint *temp;
	listint *m;

	for (nnodes = 1)
	{
		m = malloc(sizeof(listint));
		m = new listint;
		temp = m;
		h = m;
		printf("%d\n", m->n);
	}
	for (nnodes = 2)
	{
		m = malloc(sizeof(listint));
		m = new listint;
		temp->next = m;
		temp = m;
		printf("%d\n", m->n);
		nnodes++;
	}
	return (nnodes);
}
