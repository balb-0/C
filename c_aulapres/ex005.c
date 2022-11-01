#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Teste: %%%%\n");
    printf("%.3f\n", 40.654);
    printf("Um caracter %c e um número %i\n", 'D', 120);
    printf("%s%i%%", "Juros de ", 10);


}
