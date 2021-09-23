/*
 ============================================================================
 Name        : tp_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaAllende.h"

int main()
{
	setbuf(stdout,NULL);

    char seguir = 's';
    int numeroUno;
    int numeroDos;
    int banderaNumeroUno = 0;
    int banderaNumeroDos = 0;
    int banderaCalculoResultados = 0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int errorDivision;
    int resultadoFactorialUno;
    int resultadoFactorialDos;
    int todoOkFactorialUno;
    int todoOkFactorialDos;
    float punteroDivision;



    do
    {

        switch(menu(banderaNumeroUno, numeroUno, banderaNumeroDos, numeroDos))
        {
        case 1:
            printf("Ingrese el primer operando \n");
            scanf("%d", &numeroUno);
            banderaNumeroUno = 1;

            break;
        case 2:
                if(banderaNumeroUno == 0)
                {
                    printf("Para ingresar el 2do operando, deberiamos ingresar el primero \n");

                }
                    else
                    {
                    printf("Ingresar el segundo operando \n");
                    scanf("%d", &numeroDos);
                    banderaNumeroDos = 1;
                    }
            break;
        case 3:
               if(banderaNumeroUno == 0 || banderaNumeroDos == 0)
               {
                   printf("Para calcular los resultados, deberiamos ingresar ambos numeros");


               }
               else
               {
                    resultadoSuma = sumar(numeroUno, numeroDos);
                    resultadoResta = restar(numeroUno, numeroDos);
                    resultadoMultiplicacion  = multiplicar(numeroUno, numeroDos);
                    errorDivision = division(numeroUno, numeroDos, &punteroDivision);
                   todoOkFactorialUno = factorial(numeroUno, &resultadoFactorialUno);
                   todoOkFactorialDos = factorial(numeroDos, &resultadoFactorialDos);
                    banderaCalculoResultados = 1;

               }

            break;
        case 4:
            if(banderaCalculoResultados == 0)
            {
                printf("Para mostrar los resultados, deberiamos calcularlos");

            }
            else
            {
                printf("a) El resultado de %d+%d es %d \n", numeroUno, numeroDos, resultadoSuma);
                printf("b) El resultado de %d-%d es %d \n", numeroUno, numeroDos, resultadoResta);

                 if(errorDivision)
                {
                    printf("c) No se puede dividir por 0 \n");

                }
                else
                    {
                        printf("c) El resultado de %d/%d es %.2f \n", numeroUno, numeroDos, punteroDivision);
                    }

                printf("d) El resultado de %d*%d es %d \n",numeroUno, numeroDos, resultadoMultiplicacion);

                if(todoOkFactorialUno == 1)
                {
                    printf("e) El factorial de %d es: %d y ", numeroUno, resultadoFactorialUno);
                }
                else
                {
                 printf("e) El factorial del primer operando no se pudo calcular y ");
                }

                if(todoOkFactorialDos == 1)
                {
                    printf(" El factorial de %d es: %d \n", numeroDos, resultadoFactorialDos);
                }
                else
                {
                 printf(" El factorial del segundo operando no se pudo calcular \n");
                }


               /* Validacion division opcion 2
                if(numeroUno >= 0 && numeroDos >=0)
                {
                printf("e) El factorial de %d es: %d y El factorial de %d es %d \n", numeroUno, resultadoFactorialUno, numeroDos, resultadoFactorialDos);

                }
                else
                {
                        if(numeroDos <0 && numeroUno >=0)
                        {
                            printf("e) El factorial de %d es: %d y El factorial de %d es **NO SE PUEDE CALCULAR** \n", numeroUno, resultadoFactorialUno, numeroDos);
                        }
                        else
                        {
                            if(numeroUno <0 && numeroDos >=0)
                            {
                                printf("e) El factorial de %d es: **NO SE PUEDE CALCULAR** y El factorial de %d es %d \n", numeroUno, numeroDos, resultadoFactorialDos);
                            }
                            else
                            {
                                printf("e) El factorial de los operandos ingresados no se pueden calcular \n");
                            }
                        }
                } */


            }


            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("opcion invalida \n");


        }







    system("pause");



    }
    while(seguir == 's');


    return 0;
}
