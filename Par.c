/*Programa realizado el 28 de Junio del 2021
programa que determina si el número entero ingresado por el usuario es par o no.
Programa realizado por LR*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int ingreso;
  int salida;
  printf("Ingrese un numero\n");
  scanf("%d", &ingreso );
  salida = ingreso%2;

  if (ingreso%2>0) {
    printf("No es numero par\n");
  }else{
    printf("Es numero par\n");
  }

  return 0;
}
