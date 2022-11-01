#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int num; // setei uma variável
    printf("Escolha um número:\n"); // so printei a mensagem
    scanf("%i", &num); // aqui pedi uma resposta no terminal e o valor digitado vira o valor da variável
    printf("O número que você escolheu foi: %i", num); // o %i, num ta chamando o valor digitado pra aparecer na tela

}
