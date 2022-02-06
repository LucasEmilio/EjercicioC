/*Programa realizado el 23 de Junio del 2021
el cual recibe la hora actual y cuantas horas sumar. te regresa esa suma
Programa realizado por LR*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int horaActual;
  int horaSumar;
  int horaFutura;
  printf("\nCual es la hora actual\n");
  scanf("%d",&horaActual );
  printf("Cuanto le quieres sumar\n");
  scanf("%d",&horaSumar );
  if (horaActual>=0 && horaActual<=23) {
      horaFutura = horaActual+horaSumar;
      if (horaSumar>=0 && horaSumar<=24) {
        printf("En %d horas seran las %d horas\n",horaActual, horaFutura );
      }else if (horaFutura<24 ) {
        printf("excede del numero de horas en un dia \n");
    }
  }



  return 0;
}
