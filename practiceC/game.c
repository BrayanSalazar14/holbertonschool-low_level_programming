#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	short playerOpt, pcOpt, menuOpt = 1, winnings = 0, losses = 0, draws = 0;

	srand(time(NULL));
	
	do
	{
		switch(menuOpt)
		{
			case 1:
				system("cls"); // Limpia la consola
				pcOpt = (int)(1 + rand() % 3);
				printf("1-Piedra\n2-Papel\n3-Tijera\n");
				printf("Ingrese una opcion: \n");
				scanf("%hd", &playerOpt);

				if(playerOpt == 1 && pcOpt == 3 || (playerOpt == 2 && pcOpt == 1) || (playerOpt == 3 && pcOpt == 2))
				{
					printf("Ganaste\n");
					winnings++;
				}
				else
				{
					if(pcOpt == 1 && playerOpt == 3 || (pcOpt == 2 && playerOpt == 1) || (pcOpt == 3 && playerOpt == 2))
					{
						printf("Perdiste\n");
						losses++;
					}
					else
					{
						printf("Empate\n");
						draws++;
					}
				}
				system("pause"); //Pausa la consola
				break;
			case 2:
				system("cls"); // Limpia la consola
				printf("----MARCADOR PARCIAL-----\n");
				printf("Partidas ganadas: %hd\n", winnings);
				printf("Partidas perdidas: %hd\n", losses);
				printf("Partidas empatadas: %hd\n", draws);
				system("pause"); //Pausa la consola
				break;
			case 3:
				break;
			default:
				while(menuOpt<1 || menuOpt>3)
				{
					printf("Ingrese una opcion valida: \n");
					scanf("%hd", &menuOpt);
				}
		}
		system("cls");
		printf("1-Jugar\n2-Ver marcador\n3-Salir\n");
		printf("Ingrese una opcion: \n");
		scanf("%hd", &menuOpt);
	}while (menuOpt != 3);

	system("cls");
	printf("-----MARCADOR FINAL----\n");
	printf("Partidas ganadas: %hd\n", winnings);
	printf("Partidas perdidas: %hd\n", losses);
	printf("Partidas empatadas: %hd\n", draws);

	return (0);
}
