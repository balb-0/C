#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 1;
    printf("Eu sou um simples\n");
    printf("computador\n");
    printf("Meu número favorito é o %i, pois é o primeiro", num);
}
