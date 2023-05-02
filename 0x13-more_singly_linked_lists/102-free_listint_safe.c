#include "lists.h"
#include <stdlib.h>

/**
  * free_listint_safe - frees a listint_t list
  * @h: pointer to pointerto the head of the listint_t list
  * Return: the size of the list that was free’d
  */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int difr;
	listint_t  *tem;

	if (h == NULL || *h == NULL)
		return (0);


	while (*h)
	{
		difr = *h - (*h)->next;
		if (difr > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;
	return (count);
}
