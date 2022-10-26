#include "lists.h"
/**
 * add_nodeint - function that add node lists.h the beg nning of list
 * @head: Header pointer to the list
 * @n: Data to be added to list
 * Return: Nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
		listint_t *newnode;

		newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		*head = newnode;

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (*head);
}
