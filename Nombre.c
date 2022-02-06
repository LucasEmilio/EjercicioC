/*Programa realizado el 22 de Junio del 2021
el cual recibe un nombre, y regresa el nombre mas un saludo
Programa realizado por LR*/
//cabecera
#include <stdio.h>

//funcionalidades

int main(int argc, char const *argv[])
{
    //variables de entrada
    char name[50];

    //ingreso de los datos
    printf("Ingresa tu nombre por favor\n");
    
    scanf("%s",name);
    //Salida de datos
    printf("\nHola, %s, un gusto\n",name);


    return 0;
}

