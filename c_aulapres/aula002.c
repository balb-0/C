#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int num; // setei uma vari�vel
    printf("Escolha um n�mero:\n"); // so printei a mensagem
    scanf("%i", &num); // aqui pedi uma resposta no terminal e o valor digitado vira o valor da vari�vel
    printf("O n�mero que voc� escolheu foi: %i", num); // o %i, num ta chamando o valor digitado pra aparecer na tela

}
