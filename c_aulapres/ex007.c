#include <stdio.h>
#include <math.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    float salario;
    float kw;
    float desconto;

    printf("Digite o valor do sal�rio m�nimo: \n");
    scanf("%f", &salario); // n�o pode colocar .numero na fun��o scanf
    printf("O valor do sal�rio m�nimo � de: %.2f\n", salario);
    kw = salario * 0.2;
    printf("Ent�o, o valor do quilowatt � de: %.2f\n", kw);
    desconto = kw * 0.85;
    printf("Mas se voc� tiver um desconto de 15%%, o valor final fica igual a %.2f", desconto);


}
