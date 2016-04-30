#define FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    char name[20];
    int age;
    int state;
    int dni;
}EPerson;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int getSpace(EPerson list[], int lenghtList);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int searchDni(EPerson list[], int lenghtList, int dni);

void deletePerson(EPerson listPerson[], int lenght, int dni);
void predefineValue(EPerson person[],int lenghtList, int value);
void graphBar(int rank1, int rank2, int rank3);


