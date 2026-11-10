
/*
Questao 04 - Meta Diaria de Passos

Logica utilizada:

1. Criar uma variavel para armazenar o total de passos.
2. Ler a quantidade de passos dados pelo usuario a cada hora.
3. Somar os passos de cada hora ao total acumulado.
4. Contar quantas horas foram necessarias.
5. Repetir o processo enquanto o total de passos
   for menor que 10.000.
6. Quando o total atingir ou ultrapassar 10.000 passos,
   mostrar quantas horas foram necessarias.
*/

#include <stdio.h>

int main() {
    int passos, total = 0, horas = 0;

    while (total < 10000) {
        printf("Digite a quantidade de passos da hora %d: ", horas + 1);
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Quantidade invalida! Digite novamente.\n");
        } else {
            total = total + passos;
            horas++;
        }
    }

    printf("\nMeta diaria atingida!\n");
    printf("Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);

    return 0;
}
