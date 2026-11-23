# Sistema de Operações com Matrizes

**Curso:** Análise e Desenvolvimento de Sistemas (ADS)  
**Semestre:** 2º semestre  
**Disciplina:** Algoritmos e Pensamento Computacional  
**Aluno:** Pedro Henrique Lima
**Professora:** Karla 

## 1. Objetivo

Desenvolver um programa em linguagem C que permita cadastrar matrizes e realizar operações matemáticas entre elas. O sistema apresenta um menu de opções, verifica se cada operação pode ser realizada e mostra o resultado no terminal.

## 2. Funcionalidades

- Cadastro de 2 a 10 matrizes, com até 10 linhas e 10 colunas cada.
- Preenchimento individual dos elementos de cada matriz.
- Adição e subtração de matrizes.
- Multiplicação de matrizes.
- Divisão matricial utilizando a inversa da matriz divisora.
- Verificação das dimensões e identificação de matrizes sem inversa.
- Verificação dos dados digitados, com nova solicitação em caso de entrada inválida.
- Visualização das matrizes cadastradas.
- Menu para realizar outras operações ou encerrar o programa.

## 3. Regras das operações

| Operação | Condição |
| --- | --- |
| Adição | Todas as matrizes devem ter as mesmas dimensões. |
| Subtração | Todas as matrizes devem ter as mesmas dimensões. |
| Multiplicação | As colunas do resultado anterior devem corresponder às linhas da próxima matriz. |
| Divisão | A matriz divisora deve ser quadrada, possuir inversa e ter dimensões compatíveis. |

A divisão é calculada por meio da multiplicação pela matriz inversa, encontrada pelo método de Gauss-Jordan. As operações com três ou mais matrizes são feitas na ordem do cadastro, da esquerda para a direita.

## 4. Arquivos do projeto

- `main.c`: código-fonte do programa.
- `README.md`: descrição e instruções do projeto.

## 5. Compilação e execução

É necessário ter o compilador GCC instalado. Abra o terminal na pasta do projeto e digite:

```bash
gcc main.c -o matrizes -lm
```

Para executar no **Windows**:

```bash
.\matrizes.exe
```

Para executar no **Linux ou macOS**:

```bash
./matrizes
```

Também é possível abrir o arquivo `main.c` em um ambiente de programação que permita compilar programas em C.

## 6. Como utilizar

1. Informe quantas matrizes deseja cadastrar, de 2 a 10.
2. Para cada matriz, informe a quantidade de linhas e colunas.
3. Digite o valor de cada elemento solicitado.
4. Escolha uma operação no menu.
5. Confira o resultado ou a mensagem informando por que a operação não pode ser realizada.
6. Escolha outra operação ou digite `0` para encerrar.

Para números decimais, utilize ponto, por exemplo `2.5`.

## 7. Exemplo de utilização

Considere duas matrizes com 2 linhas e 2 colunas:

**Matriz 1**

```text
| 1  2 |
| 3  4 |
```

**Matriz 2**

```text
| 5  6 |
| 7  8 |
```

Após cadastrar as duas matrizes, escolha a opção `1 - Adicao` no menu. O resultado será:

```text
Resultado (2 x 2):
|     6.00     8.00 |
|    10.00    12.00 |
```

O programa retorna ao menu após mostrar o resultado. Se as dimensões forem incompatíveis com a operação selecionada, ele informa o problema e permite escolher outra opção.

## 8. Funções implementadas

| Função | Responsabilidade |
| `limparEntrada()` | Descarta o restante do texto digitado após uma leitura. |
| `lerInteiro()` | Lê um número inteiro e verifica se está dentro do intervalo permitido. |
| `lerNumero()` | Lê um elemento numérico da matriz. |
| `lerMatriz()` | Solicita os valores dos elementos da matriz. |
| `mostrarMatriz()` | Mostra os elementos em linhas e colunas. |
| `copiarMatriz()` | Copia os valores de uma matriz para outra. |
| `mesmasDimensoes()` | Verifica se duas matrizes têm as mesmas dimensões. |
| `somar()` | Soma duas matrizes. |
| `subtrair()` | Subtrai duas matrizes. |
| `multiplicar()` | Multiplica duas matrizes. |
| `calcularInversa()` | Calcula a inversa de uma matriz quadrada, quando existe. |
| `cadastrarMatrizes()` | Solicita a quantidade de matrizes, suas dimensões e seus elementos. |
| `mostrarCadastradas()` | Exibe todas as matrizes armazenadas. |
| `executarOperacao()` | Verifica as condições e executa a operação escolhida, na ordem de cadastro. |
| `main()` | Controla o menu e o encerramento do sistema. |

## 9. Limites do programa

- É possível cadastrar no máximo 10 matrizes.
- Cada matriz pode ter no máximo 10 linhas e 10 colunas.
- Os resultados são mostrados com duas casas decimais.
