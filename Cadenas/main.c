#include <stdio.h>
#include <string.h>

int main ()
{
    char cadena1 [] = "Hola";
    char cadena2 [] = "Mundo";
    char cadena3 [] = "Hola";

    int comparacion1 = strcmp (cadena1, cadena2);

    if (comparacion1 == 0)
    {
        printf("Las cadenas (%s y %s) son iguales\n", cadena1, cadena2);
    }
    else
    {
        printf("Las cadenas (%s y %s) son diferentes\n", cadena1, cadena2);
    }

    int comparacion2 = strcmp (cadena1, cadena3);

    if (comparacion2 == 0)
    {
        printf("Las cadenas (%s y %s) son iguales\n",  cadena1, cadena3);
    }
    else
    {
        printf("Las cadenas (%s y %s) son diferentes\n", cadena1, cadena3);
    }

    int longitud = strlen (cadena1);
    printf ("La longitud de la cadena %s es %d\n", cadena1, longitud);

    return 0;
}