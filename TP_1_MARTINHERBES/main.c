#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int suma(float x, float y);// declaro la funcion suma
int resta(float x, float y);// declaro la funcion resta
int division(float x, float y);// declaro la funcion division
int multiplicacion(float x, float y);// declaro la funcion multiplicacion

int main()
{
    char seguir='s';
    int opcion=0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    float resultadoFactorial;
    float operandoA;
    float operandoB;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                 printf("ingrese primer operando");
                 fflush(stdin);
                 scanf("%f",&operandoA);
                 break;
            case 2:
                 printf("ingrese segundo operando");
                 fflush(stdin);
                 scanf("%f",&operandoB);
                 break;
            case 3:
                 resultadoSuma=suma(operandoA,operandoB);
                 printf("\nEl resultado de la suma es: %f\n",resultadoSuma);
                 break;
            case 4:
                 resultadoResta=resta(operandoA,operandoB);
                 printf("\nEl resultado de la resta es: %f\n",resultadoResta);
                 break;
            case 5:
                 resultadoDivision=division(operandoA,operandoB);
                 printf("\nEl resultado de la division es: %f\n",resultadoDivision);
                 break;
            case 6:
                 resultadoMultiplicacion=multiplicacion(operandoA,operandoB);
                 printf("\nEl resultado de la multiplicacion es: %f\n",resultadoMultiplicacion);
                 break;
            case 7:
                 break;
            case 8:
                 resultadoSuma=suma(operandoA,operandoB);
                 printf("\nEl resultado de la suma es: %f\n",resultadoSuma);
                 resultadoResta=resta(operandoA,operandoB);
                 printf("\nEl resultado de la resta es: %f\n",resultadoResta);
                 resultadoDivision=division(operandoA,operandoB);
                 printf("\nEl resultado de la division es: %f\n",resultadoDivision);
                 resultadoMultiplicacion=multiplicacion(operandoA,operandoB);
                 printf("\nEl resultado de la multiplicacion es: %f\n",resultadoMultiplicacion);
                 break;
            case 9:
                 seguir = 'n';
                 break;
        }

    }
    return 0;
}
