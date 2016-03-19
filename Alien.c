#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct alien_t{
	char nombre[30];
	int id;
	char especie[30];
	struct planetas_t *planetas;
	struct idiomas_t *idiomas;
	struct alient_t *siguiente;
}alien;

typedef struct planetas_t{
	char nombre[30];
	int starwars_code;
	char agua;
	char oxigeno;
	struct planetas_t *siguiente;
}planeta;

typedef struct idioma_t{
	char nombre[30];
	char tipo;
	int simbolos;
	struct idiomas_t *siguiente;
	struct planetas_t *planetas;
}idiomas;

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
	printf("La especie del alien es: %s\n", lista_aliens->especie);
	
	return 0;
}
