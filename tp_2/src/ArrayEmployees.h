#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED


typedef struct{

    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}eEmployee;


#endif // ARRAYEMPLOYEES_H_INCLUDED


/**
 * @fn int menu()
 * @brief Mostrara un menu
 *
 * @return Retornara la opcion elegida por el usuario
 */
//funcion mostrar menu
int menu();


/**
 * @fn int initEmployees(eEmployee[], int)
 * @brief Esta funcion buscara un lugar vacio donde ingresar un empleado
 *
 * @param list Puntero estructura empleado
 * @param len tamaño
 * @return Retorna si hay espacio para ingresar al empleado en el indice
 */
int initEmployees(eEmployee list[], int len);

/**
 * @fn int addEmployee(eEmployee[], int, int, char[], char[], float, int)
 * @brief
 *
 * @param list Puntero estructura empleado
 * @param len tamaño
 * @param id identificacion automatica del empleado
 * @param name nombre del empleado
 * @param lastName apellido del empleado
 * @param salary salario del empleado
 * @param sector sector del empleado
 * @return Retornara si la carga de datos se realizo con exito
 *
 */
//funcion alta persona
int addEmployee(eEmployee list[], int len,
                                   int id,
                                   char name[],
                                   char lastName[],
                                   float salary,
                                   int sector);


//buscar empleado por id
/**
 * @fn int findEmployeeById(eEmployee[], int, int)
 * @brief Busca un empleado segun su id asignado
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @param id identificacion automatica del empleado
 * @return retorna el indice en el que esta ubicado el id solicitado por el usuario
 */
int findEmployeeById(eEmployee list[], int len, int id);


//remover empleado
/**
 * @fn int removeEmployee(eEmployee[], int)
 * @brief
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @return retorna si la baja del empleado se pudo realizar con exito
 */
int removeEmployee(eEmployee list[], int len);


//////// mostrar empleados /////
/**
 * @fn int printEmployees(eEmployee[], int)
 * @brief Se encarga de imprimir los empleados cargados en el sistema
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @return retornara si se pudieron mostrar los empleados con exito
 */
int printEmployees(eEmployee list[], int len);


//mostrar empleado
/**
 * @fn void printEmployee(eEmployee)
 * @brief Esta funcion imprime la estructura del sistema en el que se cargaran los datos de la estructura de empleados
 *
 * @param aEmployee
 */
void printEmployee(eEmployee aEmployee);


//modificar empleado
/**
 * @fn int modificationEmployer(eEmployee[], int)
 * @brief  Permite modificar datos de empleados ingresados anteriormente
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @return retornara si la modificacion se pudo realizar
 */
int modificationEmployer(eEmployee list[], int len);


//menu modificacion
/**
 * @fn int menuModification()
 * @brief Muestra el menu en el que el usuario elegira que dato modificar
 *
 * @return retorna la opcion ingresada por el usuario
 */
int menuModification();


//acumulador salario
/**
 * @fn int salaryAcumulator(eEmployee[], int)
 * @brief Acumulara los salarios de los empleados dados de alta, calculara el promedio de salarios y calculara los empleados con un salario superior al promedio
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @return retorna si se pudieron realizar los calculos con exito
 */
int salaryAcumulator(eEmployee list[], int len);


//menu informes
/**
 * @fn int menuInformation()
 * @brief Muestra el menu de informes
 *
 * @return retorna la opcion ingresada por el usuario
 */
int menuInformation();


//informes de empleados
/**
 * @fn int sortEmployees(eEmployee[], int, int)
 * @brief Ordena los empleados de manera ascendente o descendente segun eleccion del usuario
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @param order criterio de ordenamiento elegido por el usuario
 * @return retorna si se pudo realizar el ordenamiento
 */
int sortEmployees(eEmployee list[], int len, int order);


//submenu ordenamientos
/**
 * @fn int subMenuInformation()
 * @brief Sub menu en el que el usuario elegira si ordenara de manera ascendente o descendente
 *
 * @return retorna la opcion elegida por el usuario
 */
int subMenuInformation();



//funcion flag
/**
 * @fn int flagEntry(eEmployee[], int, int*)
 * @brief En el caso de que los empleados sean dados de baja y no haya empleados para mostrar reiniciara las banderas
 *
 * @param list puntero estructura empleado
 * @param len tamaño
 * @param flag puntero bandera
 * @return retornara si se pudo hacer el reseteo de banderas correctamente
 */
int flagEntry(eEmployee list[], int len, int* flag);


