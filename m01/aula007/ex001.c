#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um n�mero inteiro: ");
    scanf("%i", &num);
    printf("O n�mero que voc� digitou foi: %i", num);
}
