#include <stdio.h>

struct Punto2{
	float z;
	float w;
};

struct Punto{
	float x;
	float y;
	struct Punto2 p2;
};

void duplicaPunto(struct Punto *punto);

int main(int argc, char *argv[])
{
	struct Punto p, *ptro;

	p.x = 10.5;
	p.y = -1;
	p.p2.z = 35.6;
	p.p2.w = 37.9;

	duplicaPunto(&p);
	printf("%0.f, %0.f, %0.f, %0.f\n", p.x, p.y, p.p2.z, p.p2.w);

	return (0);
}

void duplicaPunto(struct Punto *punto)
{
	punto->x = punto->x * 2; //Es equivalente a (*punto).x * 2 
	punto->y = punto->y * 2; // "    ""       " (*punto).y *2
	punto->p2.z = punto->p2.z * 2;
	punto->p2.w = punto->p2.w * 2;
}
