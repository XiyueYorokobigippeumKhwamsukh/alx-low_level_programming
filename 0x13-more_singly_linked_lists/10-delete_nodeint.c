#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  * index of a listint_t linked list
  * @head: pointer to pointer on the first node in the listint_t
  * @index: index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *current, *prev;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = current;
	current = current->next;

	for (j = 1; current && j <= index; j++)
	{
		if (j == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
	}

	return (-1);
}
