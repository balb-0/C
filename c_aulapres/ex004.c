#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char planeta[] = "Venus";
    int distancia = 67;

    printf("O planeta %s est� a %i milh�es de km do Sol", planeta, distancia);

}
