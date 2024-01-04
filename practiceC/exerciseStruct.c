#include <stdio.h>

struct Persona
{
	char* nombre;
	int edad;
	float peso;
};

int main(int argc, char *argv[])
{
	struct Persona p1, p2;

	p1.nombre = "Brayan";
	printf("Ingrese edad de p1:\n");
	scanf("%d", &p1.edad);
	p1.peso = 60;

	p2.nombre = "Andrea";
	printf("Ingrese edad de p2:\n");
	scanf("%d", &p2.edad);
	p2.peso = 65;

	printf("Nombre: %s, Edad: %d, Peso: %0.f\n", p1.nombre, p1.edad, p1.peso);
	printf("Nombre: %s, Edad: %d, Peso: %0.f\n", p2.nombre, p2.edad, p2.peso);
}
