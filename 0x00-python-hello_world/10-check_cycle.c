#include "lists.h"

/**
 * check_cycle - It checks if there is a cycle in a linked list
 * @list: Linked list to check
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *p = list;
	listint_t *f = list;

	if (!list)
		return (0);

	while (p && f && f->next)
	{
		p = p->next;
		f = f->next->next;
		if (p == f)
			return (1);
	}
	return (0);
}
