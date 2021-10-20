#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "input.h"

//HAY QUE LLAMAR A LA FUNCION MODIFICAR Y SU MENU DE MODIFICACION, FALTA VALIDACIONES, FALTAN ORDENAMIENTOS RAROS XD

#define LEN 10




int main()
{
    char seguir = 's';
    int nextId = 1;
    int criterio=0;
    int flag=0;


    eEmployee list[LEN];

    if(!initEmployees(list, LEN))
    {
        printf("Ocurrio un problema al inicializar personas");
    }

    //harcodearPersonas(list, LEN, 5, &nextId);

    do
    {
        switch(menu())
        {
        case 1:
            if(addEmployee(list, LEN, nextId, list->name, list->lastName, list->salary, list->sector))
            {
                printf("Alta exitosa!!\n");
                nextId++;
                flag=1;
            }
            else
            {
                printf("Hubo un problema al realizar el alta\n");
            }
            break;
        case 2:
            if(flag == 0)
            {
                printf("No se ingresaron empleados \n");
            }
            else
            {
                 if(modificationEmployer(list, LEN))
                {
                    printf("Modificacion exitosa!!!\n");
                }
                else
                {
                    printf("Hubo un problema al modificar\n");
                }
            break;
            }

        case 3:
                if(flag == 0)
                {
                    printf("No se ingresaron empleados \n");
                }
                else
                {
                    if(removeEmployee(list, LEN))
                    {
                        printf("Baja exitosa!! \n");
                    }
                    else
                    {
                        printf("Ocurrio un problema al realizar la baja\n");
                    }
                    flagEntry(list, LEN, &flag);
                }
            break;
        case 4:
            if(flag == 0)
                {
                    printf("No se ingresaron empleados \n");
                }
            else
            {
                if(sortEmployees(list, LEN, criterio))
                {
                   printf("Ordenamiento exitoso \n");
                }
               else
                {
                    printf("\n");
                }
            }
            break;
        case 5:
            seguir = 'n';
            break;
        default:
            printf("Opcion invalida \n\n");
            break;
        }
        system("pause");

    }
    while(seguir == 's');


    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


















