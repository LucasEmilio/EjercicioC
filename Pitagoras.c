/*Programa realizado el 22 de Junio del 2021
el cual recibe el dos valores y regresa la hipotenusa
Programa realizado por LR*/

#include <stdio.h>
#include <math.h>

 int main(int argc, char const *argv[]) {
   //valores de entrada
   float a,b;

   //valores de salida
   float c;

   //ingreso de datos
   printf("\nIngresa el primer cateto(a)\n");
   scanf("%f",&a);
   printf("Ingresa el segundo cateto(b)\n");
   scanf("%f",&b);

   //manipulacion de datos

  if (a>0) {
    if (b>0) {
      float aux;
      aux = pow(a,2) + pow(b,2);
      c = sqrt(aux);
      printf("El cateto a es:%.2f\n",a );
      printf("El cateto b es:%.2f\n",b );
      printf("La hipotenusa es:%.2f\n",c );
    }else{
      printf("Ingresa bien b\n");
    }
  }else{
    printf("Ingresa bien a\n");
  }




   return 0;
 }
