#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: pointer to pointer of the head of the listint_t
  * @index: index of the node starting at 0
  * Return: the node does not exist, return NULL
  * otherwise a pointer to the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; head != NULL && k < index; k++)
		head = head->next;

	if (head == NULL)
		return (NULL);


	return (head);
}
