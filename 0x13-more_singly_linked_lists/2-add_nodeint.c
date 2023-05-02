#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: the pointer to the pointer to the head of the listint_t
  * @n: the integer value that stores the new node
  * Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
