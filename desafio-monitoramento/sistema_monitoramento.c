#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0;
    float media;
    float maior, menor;

    int quantidade = 0;
    int acima = 0;
    int consecutivas = 0;
    int valido;

    printf("=== Monitoramento Industrial ===\n\n");

    // Pede o limite e verifica se ele e valido
    do {
        printf("Digite o limite de temperatura: ");
        valido = scanf("%f", &limite);

        if (valido != 1) {
            printf("Entrada invalida! Digite um numero.\n");
            while (getchar() != '\n');
        } else if (limite <= 0) {
            printf("O limite deve ser maior que zero.\n");
        }
    } while (valido != 1 || limite <= 0);

    // Recebe as temperaturas ate 3 ficarem acima do limite seguidamente
    while (consecutivas < 3) {
        printf("Digite a temperatura: ");
        valido = scanf("%f", &temperatura);

        if (valido != 1) {
            printf("Entrada invalida! Digite um numero.\n");
            while (getchar() != '\n');
        } else {
            // Soma e conta a quantidade de temperaturas
            soma = soma + temperatura;
            quantidade = quantidade + 1;

            // Na primeira temperatura, ela sera maior e menor ao mesmo tempo
            if (quantidade == 1) {
                maior = temperatura;
                menor = temperatura;
            } else {
                if (temperatura > maior) {
                    maior = temperatura;
                }

                if (temperatura < menor) {
                    menor = temperatura;
                }
            }

            // Verifica se a temperatura passou do limite
            if (temperatura > limite) {
                acima = acima + 1;
                consecutivas = consecutivas + 1;
                printf("Acima do limite!\n");
            } else {
                consecutivas = 0;
                printf("Dentro do limite.\n");
            }
        }
    }

    // Calcula a media
    media = soma / quantidade;

    // Mostra o relatorio final
    printf("\n=== RELATORIO FINAL ===\n");
    printf("Limite: %.2f\n", limite);
    printf("Quantidade de temperaturas: %d\n", quantidade);
    printf("Media: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Menor temperatura: %.2f\n", menor);
    printf("Acima do limite: %d\n", acima);
    printf("Programa encerrado por 3 temperaturas consecutivas acima do limite.\n");

    return 0;
}
