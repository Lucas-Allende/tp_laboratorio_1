/*
 * bibliotecaAllende.c
 *
 *  Created on: 21 sep. 2021
 *      Author: Lucas
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaAllende.h"

int menu(int banderaNumeroUno,int x,int banderaNumeroDos, int y)
{
    int opcion;
   system("cls");
            printf("Elegir opcion\n\n");

                if(banderaNumeroUno == 0)
                {

                   printf("1. Ingresar primer operando \n");

                }
                else
                {
                    printf("1. Ingresar primer operando A=%d \n", x);

                }
               if(banderaNumeroDos == 0)
                    {
                        printf("2. Ingresar segundo operando\n");

                    }
                    else
                    {
                        printf("2. Ingresar segundo operando B=%d \n", y);

                    }
            printf("3. Calcular operaciones\n");
            printf("4. Mostrar resultados \n");
            printf("5. Salir\n");

            printf("Ingrese opcion");
            fflush(stdin);
            scanf("%d", &opcion);

            return opcion;

}

int sumar(int x, int y)
{
    int resultadoSuma;

    resultadoSuma = x + y;

    return resultadoSuma;

}


int restar(int x, int y)
{
    int resultadoResta;

    resultadoResta = x - y;

    return resultadoResta;

}

int multiplicar(int x, int y)
{
    int resultadoMultiplicar;

    resultadoMultiplicar = x * y;

    return resultadoMultiplicar;
}

int division(int x, int y, float* rtaDivision)
{
    int error = 0;

    if(y == 0 )
    {
        error = 1;

    }
    else
    {


        *rtaDivision = (float)x/y;


    }

    return  error;

}

int factorial(int x, int* pA)
{
    int factorial = 1;
    int todoOk = 0;


    if( x >= 0)
    {
        for(int i = 1; i <= x; i++)
        {
        factorial *= i;
        }
      *pA = factorial;
      todoOk = 1;



    }

    return todoOk;




}




