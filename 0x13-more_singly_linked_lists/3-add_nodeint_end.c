#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer that points to another pointer that points to the first node
 * @n: number to add
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	}
	/**	if (new_node->next != 0)
		{
			return (NULL);
		}
		else*/
			return (new_node);
}
