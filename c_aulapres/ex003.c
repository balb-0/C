#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 1;
    printf("Eu sou um simples\n");
    printf("computador\n");
    printf("Meu n�mero favorito � o %i, pois � o primeiro", num);
}
