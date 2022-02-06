/*Programa realizado el 22 de Junio del 2021
el cual recibe cuatro calificaciones y regresa el promedio
Programa realizado por LR*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    //variables de entrada
    float PNota, SNota, TNota, CNota;

    //variables de salida
    float promedio;

    //ingreso de datos
    printf("\nIngresa la primera nota:\n");
    scanf("%f",&PNota);
    printf("Ingresa la segunda nota:\n");
    scanf("%f",&SNota);
    printf("Ingresa la tercera nota:\n");
    scanf("%f",&TNota);
    printf("Ingresa la cuarta nota:\n");
    scanf("%f",&CNota);

    //manipulacion de datos
    if (PNota<=10 && PNota>=0)
    {   if (SNota<=10 && SNota>=0)
        {
            if (TNota<=10 && TNota>=0)
            {
                if (CNota<=10 && CNota>=0)
                {
                    printf("\nPrimera nota: %.2f\n",PNota);
                    printf("Segunda nota: %.2f\n",SNota);
                    printf("Tercera nota: %.2f\n",TNota);
                    printf("cuarta nota: %.2f\n",CNota);

                    //sacar el promedio
                    float aux;
                    aux = PNota + SNota + TNota + CNota;
                    promedio = aux/4;
                    printf("Tu promedio es de: %.2f\n",promedio);
                }else{
                    printf("\nTu Cuarta nota esta mal\n");
                }
            }else{
                printf("\nTu tercera Nota esta mal\n");
            }
        }else{
            printf("\nTu Segunda Nota esta mal\n");
        }
    }else{
        printf("\nTu Primera nota esta mal\n");
    }

          
    




    return 0;
}
