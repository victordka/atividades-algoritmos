
/*
Questao 01 - Consumo de Agua

Logica utilizada:

1. Ler o consumo mensal de agua de 5 moradores.
2. Verificar se o consumo de cada morador esta
   dentro da media (ate 20 m3) ou acima dela.
3. Somar o consumo de todos os moradores.
4. Calcular a media geral dividindo a soma por 5.
5. Exibir o consumo medio geral.
*/

#include <stdio.h>

int main() {
    float consumo, soma = 0, media;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite o consumo do morador %d: ", i);
        scanf("%f", &consumo);

        soma = soma + consumo;

        if (consumo <= 20) {
            printf("Consumo dentro da media.\n");
        } else {
            printf("Consumo acima da media.\n");
        }
    }

    media = soma / 5;

    printf("\nConsumo medio geral: %.2f m3\n", media);

    return 0;
}

