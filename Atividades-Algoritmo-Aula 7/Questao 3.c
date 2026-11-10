
/*
Questao 03 - Media de Atendimento dos Clientes

Logica utilizada:

1. Ler a nota de atendimento de 10 clientes.
2. Verificar se cada nota esta entre 0 e 10.
3. Somar todas as notas informadas.
4. Calcular a media geral dividindo a soma por 10.
5. Exibir a media de atendimento dos clientes.
6. Se a media for menor que 7, mostrar uma
   mensagem de alerta.
*/

#include <stdio.h>

int main() {
    float nota, soma = 0, media;
    int i;

    for (i = 1; i <= 10; i++) {
        do {
            printf("Digite a nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10) {
                printf("Nota invalida! Digite novamente.\n");
            }

        } while (nota < 0 || nota > 10);

        soma = soma + nota;
    }

    media = soma / 10;

    printf("\nMedia geral de atendimento: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: A media de atendimento esta abaixo de 7!\n");
    }

    return 0;
}
