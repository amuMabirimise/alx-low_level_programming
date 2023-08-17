#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const struct dlistint_t *h)
{
	const struct dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
	printf("%d\n", current->data);
	current = current->next;
	node_count++;
	}

	return (node_count);
}
