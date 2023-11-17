#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **alloc_grid(int width, int height)
{
  int **matriz;
  int i;

  if (width <= 0 || height <= 0)
  {
    return (NULL);
    }

  
  matriz = malloc(sizeof(int *) * height);

  if (matriz == 0)
  {
    return (NULL);
    }

  for (i = 0; i < height; i++)
  {
    matriz[i]  = malloc(sizeof(int) * width);
      int j;
      for (int j = 0; j < width; j++) {
            matriz[i][j] = 0;}
  }

    return(matriz);

}
