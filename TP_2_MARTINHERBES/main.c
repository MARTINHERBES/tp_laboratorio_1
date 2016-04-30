#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "funciones.c"
#define lenghtList 20

int main()
{
         EPerson person[lenghtList];
         value(person,lenghtList-1,-1);
         char follow='y';
         int option=0;
         int lenghtArray;
         int dniDelete;
         int rank1=0;
         int rank2=0;
         int rank3=0;
         int dniAux;
         int dni;
         int index;

    char follow='y';
    int option=0;

    while(follow=='y')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&option);

        switch(option)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                follow = 'n';
                break;
        }
    }

    return 0;
}
