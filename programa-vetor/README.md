# Atividade – Vetores em C

## Identificação do estudante

- **Nome:** Guth Henry Riquelmes
- **Curso:** Análise e Desenvolvimento de Sistemas (ADS)
- **Instituição:** Centro Universitário do Distrito Federal (UDF)
- **Disciplina:** Estruturas de Dados
- **Professora:** Karla R. Sartin

## Objetivo da atividade

Desenvolver um programa em linguagem C que utiliza um **vetor de 20 números inteiros** para praticar o uso de vetores, estruturas de repetição (`for`) e estruturas condicionais (`if / else`).

O programa deve:

1. Ler 20 números inteiros digitados pelo usuário e armazená-los em um vetor;
2. Calcular e apresentar a soma dos elementos múltiplos de 3;
3. Calcular e apresentar a média dos elementos pares;
4. Informar a quantidade de números positivos e negativos;
5. Determinar e apresentar o maior e o menor valor do vetor;
6. Apresentar na tela todos os elementos armazenados no vetor.

**Regras específicas:** tratar o caso em que não existem números pares (evitando divisão por zero) e não contar o zero como positivo nem como negativo.

## Arquivos do repositório

| Arquivo | Descrição |
|---|---|
| `programa_vetor.c` | Código-fonte em C |
| `README.md` | Este arquivo de documentação |

## Explicação resumida da lógica

1. **Declaração:** um vetor `vet[20]` guarda os números. Variáveis auxiliares guardam as somas, os contadores, a média, o maior e o menor valor.
2. **Leitura:** um laço `for` percorre as posições de 0 a 19 e lê um número por vez com `scanf`.
3. **Inicialização:** `maior` e `menor` começam com o valor da primeira posição (`vet[0]`), para que a comparação comece com um valor que existe no vetor.
4. **Processamento:** um segundo laço `for` percorre o vetor, e a cada posição são feitas as verificações com `if`:
   - se `vet[i] % 3 == 0`, o valor é somado em `somaMult3`;
   - se `vet[i] % 2 == 0`, o valor é somado em `somaPares` e `contPares` aumenta em 1;
   - se `vet[i] > 0`, aumenta `contPositivos`; se `vet[i] < 0`, aumenta `contNegativos` (o zero não entra em nenhum dos dois);
   - se o valor for maior que `maior` ou menor que `menor`, essas variáveis são atualizadas.
5. **Média dos pares:** só é calculada se `contPares > 0`. Caso contrário, o programa informa que não existem números pares, evitando a divisão por zero.
6. **Exibição:** os resultados são mostrados de forma identificada e, no final, um último laço `for` imprime todos os elementos do vetor.

## Como compilar e executar

### Usando o GCC (terminal)

```bash
gcc programa_vetor.c -o programa_vetor
./programa_vetor
```

No Windows (Prompt de Comando ou PowerShell), execute com:

```
programa_vetor.exe
```

### Usando uma IDE

Abra o arquivo `programa_vetor.c` no Code::Blocks, Dev-C++ ou VS Code, depois compile e execute normalmente.

## Exemplo de entrada e saída

**Entrada** (20 números digitados, um por vez):

```
3 6 -1 8 0 15 -7 2 9 4 12 -3 5 6 -8 10 1 -2 7 14
```

**Saída:**

```
Digite 20 numeros inteiros:
Digite o 1o numero: 3
Digite o 2o numero: 6
...
Digite o 20o numero: 14

===== RESULTADOS =====
Soma dos multiplos de 3: 48
Media dos numeros pares: 4.73
Quantidade de numeros positivos: 14
Quantidade de numeros negativos: 5
Maior valor: 15
Menor valor: -8

Elementos do vetor:
3 6 -1 8 0 15 -7 2 9 4 12 -3 5 6 -8 10 1 -2 7 14
```

**Exemplo sem números pares** (entrada: 20 números ímpares):

```
Media dos numeros pares: nao existem numeros pares
```

## Observações

- Os textos exibidos pelo programa não usam acentos, para evitar problemas de codificação em alguns consoles do Windows.
- O zero é considerado par e múltiplo de 3, por isso entra nos cálculos correspondentes, mas não é contado como positivo nem negativo.
