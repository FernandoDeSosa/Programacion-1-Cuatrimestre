#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char sexo;
    int legajo;
    int i;
    int acumuladorEdad;
    float promedioEdad;
    int contadorMujeres;
    int contadorHombres;
    int edadMaxima;
    int edadMinima;

    acumuladorEdad = 0;
    contadorMujeres = 0;
    contadorHombres = 0;

    for(i=0;i<5;i++)
    {
        printf("Ingrese edad");
        scanf("%d",&edad);

        printf("Ingrese sexo");
        fflush(stdin);
        scanf("%c",&sexo);

        while(sexo!='f' && sexo!= 'm')
        {
            printf("Ingrese un sexo valido");
            fflush(stdin);
            scanf("%c",&sexo);
        }

        printf("Ingrese legajo");
        scanf("%d",&legajo);

        acumuladorEdad+= edad;

        if (sexo == 'm')
        {
          contadorHombres++;
        }
       

        if(i == 0 || edadMaxima<edad)
        {
            edadMaxima = edad;
        }
         if(i == 0 || edadMinima>edad)
        {
            edadMinima = edad;
        }
        

    }


    promedioEdad = (float) acumuladorEdad / i;
   
    //a
    printf("El promedio de edades es: %f\n",promedioEdad);
    //c
    printf("La cantidad de hombres es: %d\n",contadorHombres);
    //dd
    printf("Las edad maxima es: %d\n",edadMaxima);
    printf("Las edad minima es: %d\n",edadMinima);

    return 0;
}
