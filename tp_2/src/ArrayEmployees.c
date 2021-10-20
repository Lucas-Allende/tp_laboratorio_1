
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "input.h"


//funcion mostrar menu
int menu()
{
    int opcion;

    system("cls");
    printf("        ***Menu de Opciones***      \n\n");
    printf("------------------------------------\n");
    printf("1-Altas \n");
    printf("2-Modificar \n");
    printf("3-Bajas \n");
    printf("4-Informar \n");
    printf("5-Salir \n");

    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}




//funcion inicializar personas
int initEmployees(eEmployee list[], int len)
{
    int excelent = 0;
        if(list !=NULL && len > 0)
        {
            for(int i=0; i<len; i++)
            {
                list[i].isEmpty = 1;
            }
            excelent = 1;
        }
    return excelent;
}
///////////Buscar Libre///////////////
int searchFree(eEmployee list[], int len){
    int free= -1;
        if(list !=NULL && len>0)
        {
            for(int i=0; i<len; i++)
            {
                if(list[i].isEmpty)
                {
                free = i;
                break;
                }
            }
        }
    return free;
}

///////////// FUNCION AGREGAR EMPLEADOS /////////////////////
int addEmployee(eEmployee list[], int len,
                                   int id,
                                   char name[],
                                   char lastName[],
                                   float salary,
                                   int sector)
{
    system("cls");
    printf("   ***ALTA DE EMPLEADOS***   \n");
    int excelent = 0;
    int index;
    eEmployee auxEmployeer;

    if(list !=NULL && len > 0 && name !=NULL && lastName !=NULL )
    {
        index = searchFree(list, len);
        if(index == -1)
        {
            printf("No hay lugar en el sistema \n");
        }
        else
        {
            auxEmployeer.id = id;


            printf("Ingrese Nombre ");
            fflush(stdin);
            gets(auxEmployeer.name);
            PrimerLetraMayuscula(auxEmployeer.name);
            validarLetras(auxEmployeer.name);

            printf("Ingrese Apellido ");
            fflush(stdin);
            gets(auxEmployeer.lastName);
            PrimerLetraMayuscula(auxEmployeer.lastName);
            validarLetras(auxEmployeer.lastName);

            printf("Ingrese salario ");
            scanf("%f", &auxEmployeer.salary);
            while(auxEmployeer.salary < 1)
            {
                printf("Ingrese un salario mayor a cero");
                scanf("%f", &auxEmployeer.salary);
            }

            printf("Ingrese sector ");
            scanf("%d", &auxEmployeer.sector);

            auxEmployeer.isEmpty = 0;

            list[index] = auxEmployeer;
            excelent = 1;


        }
    }
return excelent;
}

///////////////Buscar Empleado por ID //////////////

int findEmployeeById(eEmployee list[], int len, int id)
{
    int index= -1;
        if(list !=NULL && len>0)
        {
            for(int i=0; i<len; i++)
            {
                if(!list[i].isEmpty && list[i].id == id )
                {
                index = i;
                break;
                }
            }
        }
    return index;
}


//mostrar empleado
void printEmployee(eEmployee aEmployee)
{
    printf("   %d      %-10s        %-10s        %.2f                %d\n", aEmployee.id,
                                                aEmployee.name,
                                                aEmployee.lastName,
                                                aEmployee.salary,
                                                aEmployee.sector);
}


//////// mostrar empleados /////
int printEmployees(eEmployee list[], int len)
{
int excelent=0;
int flag=1;

    if(list !=NULL && len > 0){
    system("cls");
    printf("    ***Listado de empleados  ***\n");
    printf("   Id        Nombre        Apellido            Salario              Sector\n");
    printf("----------------------------------------------------------------------\n");
        for(int i=0; i < len; i++){

            if(list[i].isEmpty == 0){
                printEmployee(list[i]);
                flag = 0;
                printf("\n\n");
            }
        }
        if(flag==1)
        {
            printf("No hay personas para mostrar");
        }

        excelent = 1;
    }


return excelent;


}


/////// Bajar empleado /remover empleado /////

int removeEmployee(eEmployee list[], int len)
{
    int excelent =0;
    int index;
    int id;
    char confirm;
        if(list !=NULL && len > 0)
        {
            system("cls");
            printf("    ***Baja Empleado***  \n\n");
            printf("Ingrese ID: ");
            scanf("%d", &id);

            index = findEmployeeById(list, len, id);
            if(index == -1)
            {
                printf("No existe un empleado con el ID %d \n", id);
            }
            else
            {
                printEmployee(list[index]);
                printf("Confirma la baja?: ");
                fflush(stdin);
                scanf("%c",&confirm);
                if(confirm == 's')
                {
                    list[index].isEmpty = 1;
                    excelent = 1;
                }
                else
                {
                    printf("Se ha cancelado la baja \n");
                }
            }

        }



    return excelent;
}

//////////////////////
int modificationEmployer(eEmployee list[], int len)
{
    int excelent = 0;
    int id;
    int index;
    char confirm;
    char auxName[20];
    char auxLastName[20];
    float auxSalary;
    int auxSector;
        if(list !=NULL && len > 0)
        {
            system("cls");
            printf("     ***Modificar Persona***    \n\n");
            printf("Ingrese id ");
            scanf("%d", &id);

            index = findEmployeeById(list, len, id);
                if(index == -1)
                {
                    printf("No existe un empleado con el id %d \n", id);
                }
                else
                {
                    printEmployee(list[index]);

                    printf("Confirma modificacion?: ");
                    fflush(stdin);
                    scanf("%c", &confirm);
                    if(confirm == 's')
                    {
                        switch(menuModification())
                        {
                        case 1:
                            printf("Ingrese nuevo nombre ");
                            fflush(stdin);
                            gets(auxName);
                            strcpy(list[index].name, auxName);
                            break;
                        case 2:
                            printf("Ingrese nuevo Apellido ");
                            fflush(stdin);
                            gets(auxName);
                            strcpy(list[index].lastName, auxLastName);
                            break;
                        case 3:
                            printf("Ingrese nuevo salario ");
                            scanf("%f", &auxSalary);
                            list[index].salary = auxSalary;
                            break;
                        case 4:
                            printf("Ingrese nuevo sector ");
                            scanf("%d", &auxSector);
                            list[index].sector = auxSector;
                            break;
                        default:
                            printf("Opcion invalida!!!\n\n");
                            break;
                        }
                    excelent = 1;
                    }
                    else
                    {
                        printf("Se ha cancelado la modificacion \n");
                    }
                }
        }

    return excelent;
}

//menu modificacion
int menuModification()
{
    int option;

    printf("   1-Modificar Nombre\n");
    printf("   2-Modificar Apellido\n");
    printf("   3-Modificar Salario\n");
    printf("   4-Modificar sector\n");

    printf("Ingrese opcion: ");
    scanf("%d", &option);

    return option;
}

//informes empleados
int sortEmployees(eEmployee list[], int len, int order)
{
    int excelent=0;
    eEmployee auxEmployee;

        if(list !=NULL && len > 0)
        {
            system("cls");
            printf("    ***Menu de Informes***  \n\n");

            switch(menuInformation())
            {
                case 1: //les pregunta para mostrar empleados
                        switch(subMenuInformation())
                        {
                        case 1:
                            order = 1;
                            for(int i=0; i < len; i++)
                            {
                                for(int j=i+1; j < len; j++)
                                {
                                    if((strcmp(list[i].lastName, list[j].lastName)>0) || ((strcmp(list[i].lastName, list[j].lastName)==0) && list[i].sector > list[j].sector))
                                    {
                                        auxEmployee = list[i];
                                        list[i] = list[j];
                                        list[j] = auxEmployee;
                                    }
                                }
                            }
                            printEmployees(list, len);
                            break;
                        case 2:
                            printf("descendente");
                            order = 0;
                            for(int i=0; i < len; i++)
                            {
                                for(int j=i+1; j < len; j++)
                                {
                                    if((strcmp(list[i].lastName, list[j].lastName)<0) || ((strcmp(list[i].lastName, list[j].lastName)==0) && list[i].sector < list[j].sector))
                                    {
                                        auxEmployee = list[i];
                                        list[i] = list[j];
                                        list[j] = auxEmployee;
                                    }
                                }
                            }
                            printEmployees(list, len);
                            break;
                        default:
                            printf("Opcion invalida");
                            break;
                        }
                    break;
                case 2:
                    salaryAcumulator(list, len);
                    break;
                default:
                    break;
            }
        }
    return excelent;
}

//menu informes
int menuInformation()
{
    int option;

    printf("   1-Mostrar empleados por apellido y sector \n");
    printf("   2-Informar sueldos \n");

    printf("Ingrese opcion: ");
    scanf("%d", &option);

    return option;
}



// sub menu informes
int subMenuInformation()
{
    int option;

    printf("    1-Ordenar Ascendente\n");
    printf("    2-Ordenar Descendente\n");

    printf("Ingrese opcion: ");
    scanf("%d", &option);

    return option;
}


//acumulador salarios
int salaryAcumulator(eEmployee list[], int len)
{
    int excelent=0;
    float acumulator = 0;
    int acountant = 0;
    float average = 0;
    int acountantEmployees = 0;
        if(list != NULL && len > 0 )
        {
            for(int i=0; i < len; i++)
            {
                if(!list[i].isEmpty)
                {
                    acumulator += list[i].salary;
                    acountant++;
                    excelent = 1;
                }
            }
            if(acountant!=0)
            {
               average = acumulator / acountant;
            }
            else
            {
                printf("No se ingresaron empleados \n");
            }

            for(int i=0; i < len; i++)
            {
                if(!list[i].isEmpty && list[i].salary > average)
                {
                  acountantEmployees++;
                }
            }

            printf("La suma total de sueldos es %.2f \n", acumulator);
            printf("El promedio de sueldos es %.2f \n", average);
            printf("Hay un total de empleados con un sueldo mayor al promedio de: %d \n", acountantEmployees);

        }
    return excelent;
}

////////////

int flagEntry(eEmployee list[], int len, int* flag)
{
    int excelent = 0;

    if(list != NULL && len > 0)
    {
        for(int i=0; i < len; i++)
        {
            if(list[i].isEmpty == 0)
            {
                *flag = 1;
                excelent = 1;
                break;
            }
            else
            {
                *flag = 0;
            }
        }
    }
    return excelent;
}


