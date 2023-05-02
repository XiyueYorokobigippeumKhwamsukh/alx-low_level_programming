#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t
  * linked list, and returns the head node’s data (n)
  * @head: a pointer to pointer to the head of the listint_t
  * Return: the head node’s data (n)
  */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;

	current = *head;
	*head = (*head)->next;
	free(current);

	return (n);
}
