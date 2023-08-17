#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

struct dlistint_t
{
	int data;
	struct dlistint_t* prev;
	struct dlistint_t* next;
};

void size_t print_dlistint(const dlistint_t *h)
{
	struct dlistint_t* current = head;

	while (current != NULL) 
	{
	printf("%d -> ", current->data);
	current = current->next;
	}

	printf("NULL\n");
}
