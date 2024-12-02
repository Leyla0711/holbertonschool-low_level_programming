#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)

{
	size_t life;
		life = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		life++;
	}
	return (life);
}
