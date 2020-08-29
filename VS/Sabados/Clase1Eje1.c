/*
De Sosa Fernando
Ejercicio 01:
Se pide una cantidad indeterminada de edades enteras,
informar:
el máximo ingresado 
el mínimo ingresado
el promedio 
la cantidad de edades ingresadas
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char respuesta;
    int edadMaxima;
    int edadMinima;
    int contadorEdades;
    int acumuladorEdades;
    float promedioEdades;
    int banderaPrimeraEdad;

    banderaPrimeraEdad = 0;
    acumuladorEdades = 0;
    contadorEdades = 0;
    respuesta = 's';
   do
   {
        printf("Ingrese edad");
        fflush(stdin);
        scanf("%d",&edad);
    
        if(banderaPrimeraEdad == 0 || edadMaxima < edad)
        {
            edadMaxima = edad;
            banderaPrimeraEdad = 1;
        }
        if(banderaPrimeraEdad == 0 || edadMinima > edad)
        {
            edadMinima = edad;
            banderaPrimeraEdad = 1;
        }

        contadorEdades++;
        acumuladorEdades+= edad;

        printf("Desea ingresar otro?"); 
        fflush(stdin);
        scanf("%c",&respuesta);


    }while(respuesta == 's');

   promedioEdades = (float) acumuladorEdades / contadorEdades;

    printf("La edad maxima es: %d\n",edadMaxima);
    printf("La edad minima es: %d\n",edadMinima);
    
    printf("El promedio de edades es:%.2f\n",promedioEdades);

    printf("La cantidad de edades ingresadas es: %d\n",contadorEdades);


    return 0;
}