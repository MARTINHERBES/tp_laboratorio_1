#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#endif // FUNCIONES_H_INCLUDED


/** \brief suma de dos valores float
 *
 * \param valores a sumar x, y
 * \param el resultado de la suma se guarda en la variable resultado
 * \return retorna el valor de la suma
 *
 */

int suma(float x,float y)
    {
        float resultado;
        resultado= x+y;
        return resultado;
    }

/** \brief resta de dos valores float
*
* \param valores a restar x, y
* \param el resultado de la resta se guarda en la variable resultado
* \return  retorna el valor de la resta
*
*/

int resta(float x,float y)
    {
        float resultado;
        resultado= x-y;
        return resultado;
    }

/** \brief division de dos valores float
 *
 * \param valores a dividir x, y
 * \param el resultado de la division se guarda en la variable resultado
 * \return retorna el valor de la division
 *
 */

int division(float x,float y)
    {
        float resultado;
        resultado= x/y;
        return resultado;
    }

/** \brief multiplicacion de dos valores float
*
* \param valores a multiplicar x, y
* \param el resultado de la multiplicacion se guarda en la variable resultado
* \return retorna el valor de la multiplicacion
*
*/

int multiplicacion(float x,float y)
    {
        float resultado;
        resultado= x*y;
        return resultado;
    }

 int factorial(x)
    {
        int respuesta;
        if(x==1)
        {
            respuesta=1;
        }
        else
        {
         respuesta=x*factorial(x-1);
        }
    return (respuesta);
    }
