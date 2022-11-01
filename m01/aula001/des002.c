#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\t\tBeep\n");
    printf("\\n\t=\t\tNova Linha\n");
    printf("\\t\t=\t\tTabulação\n");
    printf("\\\\\t=\t\tBarra\n");
    printf("%%%%\t=\t\tPorcentagem\n");
    printf("\\\?\t=\t\tInterrogação\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

}
