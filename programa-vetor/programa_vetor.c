#include <stdio.h>

int main() {
    int vet[20];                 // vetor para armazenar 20 inteiros
    int i;                       // variavel de controle dos lacos

    int somaMult3 = 0;           // soma dos multiplos de 3
    int somaPares = 0;           // soma dos numeros pares
    int contPares = 0;           // quantidade de numeros pares
    float mediaPares = 0;        // media dos numeros pares
    int contPositivos = 0;       // quantidade de numeros positivos
    int contNegativos = 0;       // quantidade de numeros negativos
    int maior, menor;            // maior e menor valor do vetor

    // ---------- Leitura dos 20 numeros ----------
    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // Inicializa maior e menor com o primeiro elemento do vetor
    maior = vet[0];
    menor = vet[0];

    // ---------- Processamento dos dados ----------
    for (i = 0; i < 20; i++) {

        // Soma dos multiplos de 3
        if (vet[i] % 3 == 0) {
            somaMult3 = somaMult3 + vet[i];
        }

        // Soma e contagem dos pares
        if (vet[i] % 2 == 0) {
            somaPares = somaPares + vet[i];
            contPares++;
        }

        // Contagem de positivos e negativos (o zero nao entra em nenhum)
        if (vet[i] > 0) {
            contPositivos++;
        } else if (vet[i] < 0) {
            contNegativos++;
        }

        // Verifica se e o maior valor
        if (vet[i] > maior) {
            maior = vet[i];
        }

        // Verifica se e o menor valor
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    // Calcula a media dos pares (evita divisao por zero)
    if (contPares > 0) {
        mediaPares = (float) somaPares / contPares;
    }

    // ---------- Exibicao dos resultados ----------
    printf("\n===== RESULTADOS =====\n");
    printf("Soma dos multiplos de 3: %d\n", somaMult3);

    if (contPares > 0) {
        printf("Media dos numeros pares: %.2f\n", mediaPares);
    } else {
        printf("Media dos numeros pares: nao existem numeros pares\n");
    }

    printf("Quantidade de numeros positivos: %d\n", contPositivos);
    printf("Quantidade de numeros negativos: %d\n", contNegativos);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    // ---------- Exibe todos os elementos do vetor ----------
    printf("\nElementos do vetor:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
