#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[] = "V�tor";
    unsigned int idade = 20;
    char sexo = 'M'; // pra string com uma letra so, no print usa %c e n�o %s
    float peso = 45.8;

    printf("O %s tem %i anos, pesa %.2fkg e � do sexo %c", nome, idade, peso, sexo);

}

/*
    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char nome[] = "Juvenal";

    printf("%s � do sexo %c, tem %i anos e pesa %.1fkg", nome, sexo, idade, peso);

*/
