#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    printf("O número que você digitou foi: %i", num);
}
