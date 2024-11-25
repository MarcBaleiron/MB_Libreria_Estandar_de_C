#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int a = 10;
    int b = -3;
    int c = 0;
    float d = -3.2;
    float e = 7.9;;

    int abs_a = abs(a);
    int abs_b = abs(b);
    int abs_c = abs(c);
    float abs_d = abs(d);
    float abs_e = abs(e);

    printf("Valor absoluto de %d: %d\n", a, abs_a);
    printf("Valor absoluto de %d: %d\n", b, abs_b);
    printf("Valor absoluto de %d: %d\n", c, abs_c);
    printf("Valor absoluto de %.2f: %.2f\n", d, abs_d);
    printf("Valor absoluto de %.2f: %.2f\n", e, abs_e);


    srand (time (0));

    int random = rand();
    printf("Numero aleatorio: %d\n", random);

    return 0;
}