#include "lists.h"

/**
 * free_list - function that releases memory allocated
 * for a list
 * @head: head of a node
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
