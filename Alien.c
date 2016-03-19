#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Structs.h"

int main(int argc, char const *argv[]){
	alien *lista_aliens;
	planeta *lista_planetas;
	idiomas *lista_idiomas;
	
	lista_aliens = malloc(sizeof(alien));
	lista_planetas = malloc(sizeof(planeta));
	lista_idiomas = malloc(sizeof(idiomas));
	
	strcpy(lista_aliens->nombre, "Alf");
	lista_aliens->id = 1234;
	strcpy(lista_aliens->especie, "Marciano");
	
	printf("El nombre del alien es: %s\n", lista_aliens->nombre);
	printf("El ID del alien es: %d\n", lista_aliens->id);
	printf("La especie del alien es: %s\n\n", lista_aliens->especie);
	
	return 0;
}
