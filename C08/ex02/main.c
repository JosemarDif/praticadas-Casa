#include <stdio.h>
#include "ft_abs.h"

int main() {
    int a = -42;
    int b = 10;
    int c = 0;
    int d = -5 + 3; // Teste de expressão

    printf("ABS(%d) = %d\n", a, ABS(a));
    printf("ABS(%d) = %d\n", b, ABS(b));
    printf("ABS(%d) = %d\n", c, ABS(c));
    printf("ABS(-5 + 3) = %d\n", ABS(d)); // Teste de expressão complexa

    return 0;
}
