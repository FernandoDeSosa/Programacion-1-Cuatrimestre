/*
De Sosa Fernando
Ejercicio 02:
Al ejercicio anterior :
Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
ademas de informar lo anterior ....informar:
la persona mas joven de las casadas
a persona mas Vieja de las solteras
de los estados civiles , cual fue el mas ingresado
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
    char estadoCivil;
    int edadMenorCasada;
    int edadMasViejaSoltera;
    int contadorSoltero;
    int contadorCasado;
    int contadorDivorciado;

    acumuladorEdades = 0;
    contadorEdades = 0;
    respuesta = 's';
    contadorSoltero = 0;
    contadorCasado = 0;
    contadorDivorciado = 0;

   do
   {
        printf("Ingrese edad");
        scanf("%d",&edad);

        do
        {
            printf("Ingrese estado civil");
            fflush(stdin);
            scanf("%c",&estadoCivil);
        }while(estadoCivil!= 's' && estadoCivil!= 'c' && estadoCivil!= 'd' );
    
        if(contadorEdades == 0 || edadMaxima < edad)
        {
            edadMaxima = edad;
            edadMasViejaSoltera = edad;
        }
        if(contadorEdades == 0 || edadMinima > edad)
        {
            edadMinima = edad;
            edadMenorCasada = edad;
        }

        switch (estadoCivil)
        {
        case 's':
            contadorSoltero++;
            break;
        case 'c':
            contadorCasado++;
        case 'd':
            contadorDivorciado++;
        }

        contadorEdades++;
        acumuladorEdades+= edad;

        printf("Desea ingresar otro?"); 
        fflush(stdin);
        scanf("%c",&respuesta);


    }while(respuesta == 's');

    if(contadorDivorciado > contadorSoltero && contadorDivorciado > contadorCasado)
    {
        printf("El estado civil mas ingresado es Divorciado con: %d\n",contadorDivorciado);
    }
    else
    {
        if(contadorCasado > contadorSoltero)
        {
            printf("El estado civil mas ingresado es Casado con: %d\n",contadorCasado);
        }
        else
        {
            printf("El estado civil mas ingresado es Soltero con: %d\n",contadorSoltero);
        }
        
    }
    

   promedioEdades = (float) acumuladorEdades / contadorEdades;

    printf("La edad maxima es: %d\n",edadMaxima);
    printf("La edad minima es: %d\n",edadMinima);
    
    printf("El promedio de edades es:%.2f\n",promedioEdades);

    printf("La cantidad de edades ingresadas es: %d\n",contadorEdades);

    printf("La edad de la persona mas joven casada es: %d\n",edadMenorCasada);
    printf("La edad de la persona mas vieja soltera es: %d\n",edadMasViejaSoltera);



    return 0;
}