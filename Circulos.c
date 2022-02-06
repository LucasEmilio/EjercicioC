/*Programa realizado el 22 de Junio del 2021
el cual recibe el radio de un circulo y regresa el area y perimetro
Programa realizado por LR*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    //variables de entrada
    float radio;
    float MPI = 3.1416;
    //variables de salida
    float area;
    float perimetro;

    //ingreso de datos
    printf("\nIngresa el valor del radio a calcular\n");
    scanf("%f", &radio);

    //validacion de datos
    if (radio >= 0)
    {
        //manipulacion de los datos 
        area = MPI * radio * radio;
        perimetro = 2 * MPI * radio;

        //mostrar los resultados
        printf("Tu valor ingresado es: %.2f\n", radio);
        printf("El area es: %.2f\n", area);
        printf("El perimetro es: %.2f\n", perimetro);
    }else{
        printf("Por favor ingrese un radio valido\n");
    }
    


    return 0;
}
