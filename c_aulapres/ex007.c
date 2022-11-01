#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float salario;
    float kw;
    float desconto;

    printf("Digite o valor do salário mínimo: \n");
    scanf("%f", &salario); // não pode colocar .numero na função scanf
    printf("O valor do salário mínimo é de: %.2f\n", salario);
    kw = salario * 0.2;
    printf("Então, o valor do quilowatt é de: %.2f\n", kw);
    desconto = kw * 0.85;
    printf("Mas se você tiver um desconto de 15%%, o valor final fica igual a %.2f", desconto);


}
