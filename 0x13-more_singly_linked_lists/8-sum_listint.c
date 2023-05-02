#include "lists.h"

/**
  * sum_listint - returns the sum of all the
  * data (n) of a listint_t linked list
  * @head: the first node of the linked list
  * Return: the sum of all the data (n)
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
