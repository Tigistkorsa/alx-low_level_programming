#include "function_pointers.h"
#include <sdio.h>

/**
* array_iterator - iterates array of args
* @array: input array
* @size: size of array
* @action: input pointer function
* Return: returns nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
return;
}


