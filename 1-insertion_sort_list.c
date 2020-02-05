#include "sort.h"

/**
 * insertion_sort_list - sorting algorithm
 * @list: pointer to list sorted
 * return nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *hold, *prior;

	if (list == NULL)
		return;
	temp = *list;
	for (temp = temp->next; temp;)
	{
		hold = temp->next;
		while (temp->prev && temp->n < (temp->prev)->n)
		{
			prior = temp->prev;
			prior->next = temp->next;
			temp->prev = prior->prev;
			prior->prev = temp;
			temp->next = prior;
			if (prior->next)
				prior->next->prev = prior;
			if (temp->prev)
				temp->prev->next = temp;
			print_list(gethead(*list));
		}
		temp = hold;
	}
	*list = gethead(*list);
}
/**
 * gethead - gets list head
 * @list: list that needs head
 * Return: listhead
 */

listint_t *gethead(listint_t *list)
{
	while (list->prev)
		list = list->prev;
	return (list);
}
