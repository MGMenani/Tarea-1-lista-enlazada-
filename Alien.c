typedef struct alien_t{
	char nombre[30];
	int id;
	char *especie;
	struct planetas_t *planetas;
	struct idiomas_t *idiomas;
	struct alient_t *siguiente;
}alien;

typedef struct planetas_t{
	char nombre[30];
	int starwars_code;
	char agua;
	char oxigeno;
	struct planeta_t *siguiente;
}planeta;

typedef struct idiomas_t{
	char nombre[30];
	char tipo;
	int simbolos;
	struct idiomas_t *siguiente;
	struct planetas_t *planetas;
}idiomas;

int int main(int argc, char const *argv[]){
	alien *alien_aliens;
	planeta *lista_planetas;
	idioma *lista_idiomas;
	
	lista_aliens = malloc(sizeof(alien));
	lista_planetas = malloc(sizeof(planeta));
	lista_idiomas = malloc(sizeof(idioma));
	
	strcpy(lista_aliens->nombre, "Alf");
	lista_aliens->id = 1234;
	
	printf("El nombre del alien es: %s", lista_aliens->nombre);
	printf("El ID del alien es: %d\n", lista_aliens->id);
	
	return 0
}
