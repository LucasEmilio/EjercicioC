/*Programa realizado el 22 de Junio del 2021
el cual recibe tres numeros y te los regresa pero en el orden del ultimo ingresado al primero
Programa realizado por LR*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    //valores de entrada
    int a,b,c;

    printf("\nIngresa tres digitos\n");
    scanf("%d%d%d",&a, &b, &c);
    if (a>=0 && a<=9)
    {
        if (b>=0 && b<=9)
        {
            if (c>=0 && c<=9)
            {
                printf("\nOrden de ingreso:%d%d%d\n", a,b,c);
                printf("Orden invertido:%d%d%d\n", c,b,a);
                
            }else{
                printf("\nSolo son digitos, por favor\n");
            }
    
        }else{
            printf("\nSolo son digitos, por favor\n");
        }
        
    }else{
        printf("\nSolo son digitos, por favor\n");
    }
    
    return 0;
}
