#include <stdio.h>

typedef struct{
	char *nombre;
	int edad;
	union{
		long fijo, cel, fax;
	}telefono;
}Persona;

int main(int argc, char *argv[])
{
	Persona p1;

	p1.nombre = "Brayan";
	p1.edad = 22;
	p1.telefono.fijo = 4026474;
	p1.telefono.cel = 3125427682;

	printf("Nombre: [%s], Edad: [%d], Telefono: [%ld]\n", p1.nombre, p1.edad, p1.telefono.fijo);
	return (0);
}
