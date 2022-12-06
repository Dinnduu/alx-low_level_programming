#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list.
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element. NUll if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
