#include <stdio.h>

struct Address{
	char city[20];
	char neighborhood[20];
	int nro;
};

struct Person{
	char name[20];
	int age;
	struct Address dir;
};

struct Book{
	char name[20];
	int year;
	int cantAuthors;
	struct Person authors[10];
};

int main(int argc, char *argv[])
{
	int N, i, j;

	struct Book books[20];

	printf("Ingrese el numero de libros\n");
	scanf("%d", &N);

	for (i = 0; i<N; i++)
	{
		printf("\nIngrese el nombre del libro:\n");
		scanf("%s", books[i].name);
		printf("\nIngrese año de publicación:\n");
		scanf("%d", &books[i].year);
		printf("\nIngrese cantidad de autores:\n");
		scanf("%d", &books[i].cantAuthors);

		for (j = 0; j<books[i].cantAuthors; j++)
		{
			printf("\nIngrese nombre del autor [%d]:\n", j+1);
			scanf("%s", books[i].authors[j].name);
			printf("\nDigite la edad del autor:\n");
			scanf("%d", &books[i].authors[j].age);
			printf("\nIngrese la ciudad donde vive:\n");
			scanf("%s", books[i].authors[j].dir.city);
			printf("\nDigite el barrio donde vive:\n");
			scanf("%s", books[i].authors[j].dir.neighborhood);
			printf("\nIngrese el numero de casa:\n");
			scanf("%d", &books[i].authors[j].dir.nro);
		}
	}

	printf("\n");

	for (i = 0; i<N; i++)
	{
		printf("\nNombre del libro: %s\n", books[i].name);
		printf("Publicado en: %d\n", books[i].year);
		printf("----Autores----\n");
		for (j = 0; j<books[i].cantAuthors; j++)
		{
			printf("\n----Autor [%d]----\n", j+1);
			printf("Nombre: %s\n", books[i].authors[j].name);
			printf("Edad: %d\n", books[i].authors[j].age);
			printf("Ciudad: %s\n", books[i].authors[j].dir.city);
			printf("Barrio: %s\n", books[i].authors[j].dir.neighborhood);
			printf("Numero de casa: %d\n", books[i].authors[j].dir.nro);
		}
	}
	return (0);
}
