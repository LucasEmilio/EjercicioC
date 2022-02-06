/*Programa realizado el 28 de junio del 2021
programa que pregunte al usuario las notas de los dos primeros certamen y la nota de laboratorio,
y muestre la nota que necesita el alumno para aprobar el ramo con nota final 60.
Programa realizado por LR*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int certamenUno, certamenDos, laboratorio;
  int promedio;
  int faltan;
  int aux;
  int needed;

  printf("Recuerda que las notas estan medidas en una escala de 0 a 100\n");
  printf("\nIngresa la nota del Primer certamen\n");
  scanf("%d", &certamenUno);
  if (certamenUno>100|| certamenUno<0) {
    printf("\nNota no valida\n");
  }
  printf("Ingresa la nota del segundo certamen \n");
  scanf("%d", &certamenDos);
  if (certamenDos>100 || certamenDos<0) {
    printf("\nNota no valida\n");
  }
  printf("Ingresa la nota del laboratorio\n");
  scanf("%d", &laboratorio);
  if (laboratorio>100 || laboratorio<0) {
    printf("\nNota no valida\n");
  }
  aux = certamenUno + certamenDos + laboratorio;
  promedio = (aux)/3;
  needed = 240 - aux;
  if (needed<=0) {
    printf("Necesitas nota 0 en el certamen tres\n");
  }else{
    printf("Necesitas nota %d en el certamen tres \n", needed );
  }
  return 0;
}
