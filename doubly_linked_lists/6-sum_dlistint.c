#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data `n` of a `dlistint_t` LL
 * @head: head of doubly LL
 * Return: sum of all `n` or 0 if LL is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
