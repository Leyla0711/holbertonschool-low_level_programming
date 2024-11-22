#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * 
 * Return: pointer to a new dog_t object, or NULL if memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *doggy;
    
    doggy = malloc(sizeof(dog_t));
    if (doggy == NULL)
        return (NULL);

    doggy->name = malloc(strlen(name) + 1);
    if (doggy->name == NULL)
    {
        free(doggy);
        return (NULL);
    }
    strcpy(doggy->name, name);

    doggy->age = age;

    doggy->owner = malloc(strlen(owner) + 1);
    if (doggy->owner == NULL)
    {
        free(doggy->name);
        free(doggy);
        return (NULL);
    }
    strcpy(doggy->owner, owner);

    return (doggy);
}
