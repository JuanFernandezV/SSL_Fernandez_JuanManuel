#include <stdio.h>

int main(){
    char var1[1000];
    FILE *archivo = fopen("Archivo.txt","w");

    printf("Introduzca el texto a escribir en el archivo (menor a 1000 caracteres): ");
    fgets(var1, 1000, stdin);
    
    fprintf(archivo,"%s",var1);
    printf("El texto se guardo en el archivo");

    fclose(archivo);

    return 0;
}