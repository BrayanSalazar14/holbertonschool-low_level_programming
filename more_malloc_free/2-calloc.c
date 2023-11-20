#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *asignMemory;
  
  if (nmemb == 0 || size == 0)
	  return NULL;
  
  asignMemory = malloc(nmemb * size);
  
  if (asignMemory == NULL)
  {
    return NULL;
    }    

  return asignMemory;
  }
