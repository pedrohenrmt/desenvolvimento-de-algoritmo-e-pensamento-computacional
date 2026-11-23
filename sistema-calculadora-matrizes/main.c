#include <stdio.h>
#include <math.h>

#define MAX 10

void limparEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int lerInteiro(int minimo, int maximo) {
    int valor;
    int correto;

    do {
        correto = scanf("%d", &valor);
        limparEntrada();

        if (correto != 1 || valor < minimo || valor > maximo) {
            printf("Valor invalido. Digite um numero entre %d e %d: ", minimo, maximo);
        }
    } while (correto != 1 || valor < minimo || valor > maximo);

    return valor;
}

double lerNumero() {
    double valor;
    int correto;

    do {
        correto = scanf("%lf", &valor);
        limparEntrada();
        if (correto != 1) {
            printf("Valor invalido. Digite um numero: ");
        }
    } while (correto != 1);

    return valor;
}

void lerMatriz(double matriz[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            matriz[i][j] = lerNumero();
        }
    }
}

void mostrarMatriz(double matriz[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        printf("| ");
        for (j = 0; j < colunas; j++) {
            printf("%8.2f ", matriz[i][j]);
        }
        printf("|\n");
    }
}

void copiarMatriz(double origem[MAX][MAX], double destino[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            destino[i][j] = origem[i][j];
        }
    }
}

int mesmasDimensoes(int linhas1, int colunas1, int linhas2, int colunas2) {
    return linhas1 == linhas2 && colunas1 == colunas2;
}

void somar(double a[MAX][MAX], double b[MAX][MAX], double resultado[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtrair(double a[MAX][MAX], double b[MAX][MAX], double resultado[MAX][MAX], int linhas, int colunas) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            resultado[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplicar(double a[MAX][MAX], double b[MAX][MAX], double resultado[MAX][MAX], int linhas, int meio, int colunas) {
    int i, j, k;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < meio; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int calcularInversa(double matriz[MAX][MAX], double inversa[MAX][MAX], int tamanho) {
    double aux[MAX][MAX * 2];
    double numero, maior, troca;
    int i, j, k, linha;

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            aux[i][j] = matriz[i][j];
            if (i == j) {
                aux[i][j + tamanho] = 1;
            } else {
                aux[i][j + tamanho] = 0;
            }
        }
    }

    for (i = 0; i < tamanho; i++) {
        linha = i;
        maior = fabs(aux[i][i]);

        for (j = i + 1; j < tamanho; j++) {
            if (fabs(aux[j][i]) > maior) {
                maior = fabs(aux[j][i]);
                linha = j;
            }
        }

        if (maior < 0.000000001) {
            return 0;
        }

        if (linha != i) {
            for (j = 0; j < tamanho * 2; j++) {
                troca = aux[i][j];
                aux[i][j] = aux[linha][j];
                aux[linha][j] = troca;
            }
        }

        numero = aux[i][i];
        for (j = 0; j < tamanho * 2; j++) {
            aux[i][j] = aux[i][j] / numero;
        }

        for (k = 0; k < tamanho; k++) {
            if (k != i) {
                numero = aux[k][i];
                for (j = 0; j < tamanho * 2; j++) {
                    aux[k][j] = aux[k][j] - numero * aux[i][j];
                }
            }
        }
    }

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            inversa[i][j] = aux[i][j + tamanho];
        }
    }
    return 1;
}

int cadastrarMatrizes(double matrizes[MAX][MAX][MAX], int linhas[MAX], int colunas[MAX]) {
    int quantidade, i;

    printf("=== CALCULADORA DE MATRIZES ===\n");
    printf("Quantas matrizes deseja cadastrar (2 a 10)? ");
    quantidade = lerInteiro(2, MAX);

    for (i = 0; i < quantidade; i++) {
        printf("\nMatriz %d\n", i + 1);
        printf("Linhas (1 a 10): ");
        linhas[i] = lerInteiro(1, MAX);
        printf("Colunas (1 a 10): ");
        colunas[i] = lerInteiro(1, MAX);
        lerMatriz(matrizes[i], linhas[i], colunas[i]);
    }
    return quantidade;
}

void mostrarCadastradas(double matrizes[MAX][MAX][MAX], int linhas[MAX], int colunas[MAX], int quantidade) {
    int i;
    for (i = 0; i < quantidade; i++) {
        printf("\nMatriz %d (%d x %d):\n", i + 1, linhas[i], colunas[i]);
        mostrarMatriz(matrizes[i], linhas[i], colunas[i]);
    }
}

void executarOperacao(double matrizes[MAX][MAX][MAX], int linhas[MAX], int colunas[MAX], int quantidade, int opcao) {
    double resultado[MAX][MAX], temporaria[MAX][MAX], inversa[MAX][MAX];
    int i, linhasResultado, colunasResultado;

    linhasResultado = linhas[0];
    colunasResultado = colunas[0];
    copiarMatriz(matrizes[0], resultado, linhasResultado, colunasResultado);

    for (i = 1; i < quantidade; i++) {
        if (opcao == 1 || opcao == 2) {
            if (!mesmasDimensoes(linhasResultado, colunasResultado, linhas[i], colunas[i])) {
                printf("Nao e possivel: as matrizes precisam ter as mesmas dimensoes.\n");
                return;
            }
            if (opcao == 1) {
                somar(resultado, matrizes[i], temporaria, linhasResultado, colunasResultado);
            } else {
                subtrair(resultado, matrizes[i], temporaria, linhasResultado, colunasResultado);
            }
        } else if (opcao == 3) {
            if (colunasResultado != linhas[i]) {
                printf("Nao e possivel: dimensoes incompativeis para multiplicacao.\n");
                return;
            }
            multiplicar(resultado, matrizes[i], temporaria, linhasResultado, colunasResultado, colunas[i]);
            colunasResultado = colunas[i];
        } else if (opcao == 4) {
            if (linhas[i] != colunas[i] || colunasResultado != linhas[i]) {
                printf("Nao e possivel: a matriz divisora deve ser quadrada e compativel.\n");
                return;
            }
            if (!calcularInversa(matrizes[i], inversa, linhas[i])) {
                printf("Nao e possivel: a matriz %d e singular e nao possui inversa.\n", i + 1);
                return;
            }
            multiplicar(resultado, inversa, temporaria, linhasResultado, colunasResultado, linhas[i]);
            colunasResultado = linhas[i];
        }
        copiarMatriz(temporaria, resultado, linhasResultado, colunasResultado);
    }

    printf("\nResultado (%d x %d):\n", linhasResultado, colunasResultado);
    mostrarMatriz(resultado, linhasResultado, colunasResultado);
}

int main() {
    double matrizes[MAX][MAX][MAX];
    int linhas[MAX], colunas[MAX];
    int quantidade, opcao;

    quantidade = cadastrarMatrizes(matrizes, linhas, colunas);

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Mostrar matrizes\n0 - Sair\n");
        printf("Escolha: ");
        opcao = lerInteiro(0, 5);

        if (opcao == 5) {
            mostrarCadastradas(matrizes, linhas, colunas, quantidade);
        } else if (opcao >= 1 && opcao <= 4) {
            executarOperacao(matrizes, linhas, colunas, quantidade, opcao);
        }
    } while (opcao != 0);

    printf("Programa encerrado.\n");
    return 0;
}
