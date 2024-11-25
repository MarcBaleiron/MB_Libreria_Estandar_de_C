#include <stdio.h>

int main ()
{
    FILE *file = fopen ("file.txt", "r");

    if (file == NULL)
    {
        printf("No se ha podido abrir el archivo\n");
        return 1;
    }

    fprintf (file, "Hola Mundo\n");

    fclose (file);

    file = fopen ("file.txt", "r");

    if (file == NULL)
    {
        printf("No se ha podido abrir el archivo\n");
        return 1;
    }

    char buffer [30];

    fscanf (file, " %[^\n]", buffer);
    printf ("Archivo leido: %s\n", buffer);

    fclose (file);

    return 0;
}