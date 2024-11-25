#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int));

/**
  * array_iterator - ...
  * @array: ...
  * @size: ...
  * @action: ...
  *
  * Return: ...
  */

{
        unsigned int i = 0;

        if (array != NULL && action != NULL && size > 0)
        {
                while (i < size)
                {
                        action(array[i]);
                        i++;
                }
        }
}
