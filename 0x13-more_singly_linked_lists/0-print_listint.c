#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the header node
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes;
	listint *temp;
	listint *m;

	for (nodes = 1)
	{
		m = malloc(sizeof(listint));
		m = new node;
		temp = m;
		h = m;
		printf("%d\n", m->n);
	}
	for (nodes = 2)
	{
		m = malloc(sizeof(listint));
		m = new node;
		temp->next = m;
		temp = m;
		printf("%d\n", m->n);
		nodes++;
	}
	return (nodes);
}
