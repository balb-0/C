#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int dia, mes, ano;
    printf("Digite uma data no formato dd-mm-aaaa: \n");
    scanf("%i%i%i", &dia, &mes, &ano);
    printf("A data que você digitou foi: %i-%i-%i", dia, mes, ano);

}
