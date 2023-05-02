#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to pointer to the head of the listint_t
  * @n: the integer value to store in the new node
  * Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}

	return (newNode);
}
