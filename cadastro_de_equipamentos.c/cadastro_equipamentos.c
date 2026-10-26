#include <stdio.h>

int main() {
    FILE *arquivo;
    int opcao;
    char nome[100];
    char codigo[50];
    char localizacao[100];
    char linha[200];

    do {
        printf("\n===== CADASTRO DE EQUIPAMENTOS =====\n");
        printf("1 - Cadastrar equipamento\n");
        printf("2 - Listar equipamentos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("\nNome do equipamento: ");
            fgets(nome, sizeof(nome), stdin);

            printf("Codigo de identificacao: ");
            fgets(codigo, sizeof(codigo), stdin);

            printf("Localizacao: ");
            fgets(localizacao, sizeof(localizacao), stdin);

            arquivo = fopen("equipamentos.txt", "a");

            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo.\n");
                return 1;
            }

            fprintf(arquivo, "Nome: %s", nome);
            fprintf(arquivo, "Codigo: %s", codigo);
            fprintf(arquivo, "Localizacao: %s", localizacao);
            fprintf(arquivo, "--------------------\n");
            fclose(arquivo);

            printf("Equipamento cadastrado com sucesso!\n");
        }
        else if (opcao == 2) {
            arquivo = fopen("equipamentos.txt", "r");

            if (arquivo == NULL) {
                printf("\nNenhum equipamento cadastrado ainda.\n");
            } else {
                printf("\n--- EQUIPAMENTOS CADASTRADOS ---\n");
                while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                    printf("%s", linha);
                }
                fclose(arquivo);
            }
        }
        else if (opcao == 3) {
            printf("Encerrando o programa...\n");
        }
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
