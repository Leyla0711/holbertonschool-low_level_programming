#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*s++)
		++i;
	return (i);
}

/**
 * add_node - Adds a node at the beginning of a list
 * @head: Pointer to address of a list
 * @str: Pointer to string
 *
 * Return: Address of new element
 * On error, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}
