/*
 * bibliotecaAllende.h
 *
 *  Created on: 21 sep. 2021
 *      Author: Lucas
 */

#ifndef BIBLIOTECAALLENDE_H_
#define BIBLIOTECAALLENDE_H_



#endif /* BIBLIOTECAALLENDE_H_ */

/**
 * @fn int menu(int, int, int, int)
 * @brief esta funcion mostrara un menu
 *
 * @param banderaNumeroUno Esta bandera sirve para mostrar el numero ingresado una vez ya se ingreso a la derecha de la opcion
 * @param x representa al primer numero que ingresara el usuario
 * @param banderaNumeroDos Esta bandera sirve para mostrar el numero ingresado una vez ya se ingreso a la derecha de la opcion
 * @param y representa al segundo numero que ingresara el usuario
 * @return retorna la opcion que eligio el usuario
 */
int menu(int banderaNumeroUno,int x,int banderaNumeroDos, int y);
/**
 * @fn int sumar(int, int)
 * @brief esta funcion va a sumar 2 operandos ingresados
 *
 * @param x representa al primer operando ingresado
 * @param y representa al segundo operando ingresado
 * @return retornara el resultado de la suma de X e Y
 */
int sumar(int x, int y);
/**
 * @fn int restar(int, int)
 * @brief esta funcion va a restar 2 operandos ingresados
 *
 * @param x representa al primer operando ingresado
 * @param y representa al segundo operando ingresado
 * @return retornara el resultado de la resta de X e Y
 */
int restar(int x, int y);
/**
 * @fn int multiplicar(int, int)
 * @brief esta funcion va a multiplicar a los 2 operandos ingresados
 *
 * @param x representa al primer operando ingresado
 * @param y representa al segundo operando ingresado
 * @return va a retornar el resultado de multiplicar X e Y
 */
int multiplicar(int x, int y);
/**
 * @fn int division(int, int, float*)
 * @brief esta funcion se usa para dividir los 2 operandos ingresados
 *
 * @param x representa al dividendo
 * @param y representa al divisor
 * @param rtaDivision representa al puntero que indica donde se va a guardar el resultado
 * @return retornara 0 en el caso de no haber ningun error o retornara 1 en el caso de que la division no sea posible de realizar
 */
int division(int x, int y, float* rtaDivision);
/**
 * @fn int factorial(int, int*)
 * @brief esta funcion se utilizara para calcular el factorial del operando ingresado
 *
 * @param x representa al operando ingresado
 * @param pA representa al puntero que indica donde se guardara el resultado del factorial de x
 * @return retornara 0 en el caso de que el factorial no se haya podido calcular o retornara 1 si el calculo fue realizado con exito
 */
int factorial(int x, int* pA);
