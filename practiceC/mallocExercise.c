#include <stdio.h>
#include <stdlib.h>
/*
typedef struct 
{
    int x, y;
}tCoord;
*/

int main(int argc, char *argv[])
{
    /*int *a, *b;
    a = (int *)malloc(sizeof(int));
    b = (int *)malloc(sizeof(int));

    *a = 5;
    *b = 10;

    printf("El valor de a es: %d\n", *a);
    printf("El valor de a es: %d\n", *b);
    printf("La suma de a + b es: %d\n", (*a + *b));

    free(a);
    a = NULL;
    free(b);
    b = NULL;
    */
   /*
   tCoord *point;

   point = (tCoord *)malloc(sizeof(tCoord));
   if (point == NULL)
   return(-1);

   printf("Ingresa x:\n");
   scanf("%d", &point->x);
   printf("Ingresa y:\n");
   scanf("%d", &point->y);
   printf("X es [%d]\nY es [%d]\nLa suma es: [%d]\n", point->x, point->y, (point->x + point->y));
   free(point);
   point == NULL;*/

   int n, i, j, *list;
   char decision;

   printf("Ingrese cuantos elementos tendra lista:\n");
   scanf("%d", &n);

   list = (int *)malloc(sizeof(int) * n);

   if (list == NULL)
   return (-1);

   for (i = 0; i < n; i++)
   {
    printf("Ingrese el dato [%d]: ", i + 1);
    scanf("%d", &list[i]);
   }

    printf("\n");
    for (i = 0; i < n; i++)
    printf("El dato [%d] es: [%d]\n", i + 1, list[i]);

    printf("\n");

    printf("\nQuieres ordenar el vector?\n Y \n N\n");
    printf("\n");
    scanf(" %c", &decision);

    if (decision == 'Y')
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                int aux;
                if (list[j + 1] < list[j])
                {
                    aux = list[j];
                    list[j] =  list[j + 1];
                    list[j + 1] = aux;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("[%d]", list[i]);
        if (i < n - 1)
        printf(", ");
    }

    free(list);
    list = NULL;
   return (0);
}