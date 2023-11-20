#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int num_size_elements;

  void *asignMemory;
  
  if (nmemb == 0 || size == 0)
	  return NULL;
  
  asignMemory = malloc(nmemb * size);
  
  if (asignMemory == NULL)
  {
    return NULL;
    }    

  num_size_elements = (nmemb * size);

for (i = 0; i < num_size_elements; i++)
	*((char *)asignMemory + i) = 0;

  return asignMemory;
}
