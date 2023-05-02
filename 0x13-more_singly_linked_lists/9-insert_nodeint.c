#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to pointer to the first node of the listint_t
  * @idx: index where the new node is added
  * @n: the data that should be inserted at the new node
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *newNode, *current;

	if (!head)
		return (NULL);

	current = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (k = 0; current && k < idx; k++, current = current->next)
	{
		if (!current->next || k == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
	}

	free(newNode);
	return (NULL);
}
