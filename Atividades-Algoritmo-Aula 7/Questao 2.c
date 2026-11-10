
/*
Questao 02 - Cofrinho Digital

Logica utilizada:

1. Criar uma variavel para armazenar o saldo do cofrinho.
2. Mostrar as opcoes de moedas: R$0,50, R$1,00 e R$2,00.
3. Permitir que o usuario escolha uma moeda para adicionar.
4. Somar o valor da moeda escolhida ao saldo.
5. Repetir o processo enquanto o usuario quiser.
6. Quando o usuario escolher parar, mostrar o saldo total.
*/

#include <stdio.h>

int main() {
    int opcao;
    float saldo = 0;

    do {
        printf("\n--- Cofrinho Digital ---\n");
        printf("1 - Adicionar R$0,50\n");
        printf("2 - Adicionar R$1,00\n");
        printf("3 - Adicionar R$2,00\n");
        printf("0 - Parar e mostrar saldo\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            saldo = saldo + 0.50;
            printf("Moeda de R$0,50 adicionada!\n");
        } else if (opcao == 2) {
            saldo = saldo + 1.00;
            printf("Moeda de R$1,00 adicionada!\n");
        } else if (opcao == 3) {
            saldo = saldo + 2.00;
            printf("Moeda de R$2,00 adicionada!\n");
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\nTotal acumulado: R$%.2f\n", saldo);

    return 0;
}
