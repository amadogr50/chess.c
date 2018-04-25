#include <stdio.h>

int show_instructions() {
	char caracter;
	FILE *archivo;
	archivo = fopen("zinstrucciones.txt", "r"); 

	if (archivo != NULL) {
		while (!feof(archivo)) {
			caracter = fgetc(archivo);
			putchar(caracter);
		}
		fclose(archivo);
	} else
		printf("No abrió el archivo");

	return 0;
}
