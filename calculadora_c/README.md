# 🧮 Calculadora em C — 20 Operações

> Um programinha de linha de comando que nasceu no Flowgorithm e cresceu para virar código C de verdade.

---

## 📖 Descrição do Projeto

Este projeto é uma **calculadora de múltiplas funções** desenvolvida em linguagem C, criada a partir da lógica de um fluxograma originalmente montado no **Flowgorithm**. A ideia foi pegar aquele desenho de blocos (setas, losangos de decisão, retângulos de processo) e "traduzi-lo" passo a passo para código C real, mantendo a mesma sequência de raciocínio, as mesmas perguntas ao usuário e as mesmas fórmulas.

O resultado é um programa simples, rodando 100% no terminal, que funciona como um menu: o usuário escolhe uma operação, informa os dados pedidos, recebe o resultado na tela e volta automaticamente ao menu — até decidir sair.

## 🎯 Objetivo da Calculadora

O objetivo principal é **praticar lógica de programação e a sintaxe básica da linguagem C**, exercitando conceitos fundamentais como:

- leitura e escrita de dados no console;
- estruturas de decisão (`if` / `else if`);
- estruturas de repetição (`while`);
- uso de operadores aritméticos e relacionais;
- aplicação de fórmulas matemáticas e de conversão em situações do dia a dia (finanças, geometria, saúde, física).

Mais do que "fazer contas", o projeto busca mostrar como um fluxograma de lógica pode ser convertido em um programa funcional, real e compilável.

## ✅ Funcionalidades Implementadas

- Menu interativo, exibido em loop, que só é encerrado quando o usuário digita `0`;
- 20 operações diferentes, cobrindo desde operações matemáticas simples até cálculos de geometria, finanças e saúde;
- Tratamento básico de erros nos pontos mais críticos (divisão por zero, regra de três com valor de referência zero, tempo igual a zero e altura igual a zero no IMC);
- Retorno automático ao menu após cada operação, permitindo várias contas seguidas sem reiniciar o programa;
- Uso da biblioteca `math.h` para cálculos que envolvem potência (área, volume e IMC).

## 🔢 Relação das 20 Funções Desenvolvidas

| Nº | Operação | O que faz |
|----|-----------|-----------|
| 1  | Soma | Soma dois números |
| 2  | Subtração | Subtrai dois números |
| 3  | Multiplicação | Multiplica dois números |
| 4  | Divisão | Divide dois números (com proteção contra divisão por zero) |
| 5  | Média aritmética | Calcula a média entre dois números |
| 6  | Porcentagem | Calcula uma porcentagem sobre um valor |
| 7  | Regra de três | Resolve uma regra de três simples |
| 8  | Celsius → Fahrenheit | Converte temperatura de Celsius para Fahrenheit |
| 9  | Fahrenheit → Celsius | Converte temperatura de Fahrenheit para Celsius |
| 10 | Perímetro do quadrado | Calcula o perímetro a partir do lado |
| 11 | Área do quadrado | Calcula a área a partir do lado (usando `pow`) |
| 12 | Área do retângulo | Calcula a área a partir da base e da altura |
| 13 | Área do círculo | Calcula a área a partir do raio (usando `pow`) |
| 14 | Volume do cubo | Calcula o volume a partir do lado (usando `pow`) |
| 15 | Juros simples | Calcula o juro e o valor final de um investimento |
| 16 | Desconto | Calcula o valor do desconto e o valor final de uma compra |
| 17 | Velocidade média | Calcula a velocidade a partir da distância e do tempo |
| 18 | Par ou ímpar | Verifica se um número inteiro é par ou ímpar |
| 19 | Comparação entre números | Informa qual número é maior, menor ou se são iguais |
| 20 | IMC | Calcula o Índice de Massa Corporal e mostra a classificação |
| 0  | Sair | Encerra o programa |

## 📚 Bibliotecas Utilizadas

- **`stdio.h`** — biblioteca padrão de entrada e saída, usada em todo o programa para `printf` (mostrar mensagens e resultados) e `scanf` (ler os dados digitados pelo usuário).
- **`math.h`** — biblioteca matemática, usada para a função `pow(base, expoente)`, que calcula potências. Ela entra em cena nos cálculos de área do quadrado, área do círculo, volume do cubo e no cálculo do IMC (que eleva a altura ao quadrado).

## 🗂️ Organização do Código

O programa inteiro está em um único arquivo (`calculadora.c`) e segue uma estrutura bem direta, pensada para ficar fácil de acompanhar:

1. **Declaração das variáveis** — todas as variáveis usadas no programa (números, resultados, medidas, etc.) são declaradas logo no início da `main`, seguindo os mesmos nomes usados no Flowgorithm original (`numero1`, `resultado`, `peso`, `altura`, `raio`...).
2. **Laço principal (`while`)** — o programa entra em um laço que se repete enquanto a variável `opcao` for diferente de `0`. É esse laço que garante o retorno ao menu depois de cada cálculo.
3. **Exibição do menu** — dentro do laço, uma sequência de `printf` mostra as 20 opções mais a opção de sair.
4. **Leitura da opção** — o `scanf` captura o número digitado pelo usuário.
5. **Cadeia de decisões (`if` / `else if`)** — cada opção do menu corresponde a um bloco `if`/`else if`, que pede os dados necessários, faz o cálculo e mostra o resultado. Essa é exatamente a mesma lógica de "escadinha de decisões" (`if`/`else` aninhado) usada no fluxograma original.
6. **Tratamentos de erro pontuais** — dentro de alguns blocos, existem verificações extras (`if` interno) para evitar divisão por zero ou situações inválidas antes de fazer a conta.
7. **Fim do laço** — quando o usuário digita `0`, a condição do `while` deixa de ser verdadeira, o laço termina e a mensagem de encerramento é exibida.

Não há funções criadas pelo programador, vetores, structs ou ponteiros — tudo acontece dentro da função `main`, de forma sequencial e fácil de explicar linha por linha.

## ⚙️ Instruções para Compilação e Execução

O programa usa a biblioteca `math.h`, então, no Linux/gcc, é **necessário linkar a biblioteca matemática** com a flag `-lm`.

### 🐧 Linux / macOS (terminal com gcc)

```bash
gcc calculadora.c -o calculadora -lm
./calculadora
```

### 🪟 Windows (Dev-C++, Code::Blocks, MinGW)

Basta abrir o arquivo `calculadora.c` no ambiente de desenvolvimento e clicar em **Compilar e Executar**. Na maioria dessas IDEs a biblioteca `math.h` já é linkada automaticamente, sem precisar de configuração extra. Se estiver usando o MinGW pelo terminal, o comando é o mesmo do Linux:

```bash
gcc calculadora.c -o calculadora.exe -lm
calculadora.exe
```

### 💻 Compiladores on-line

O código também pode ser colado diretamente em compiladores on-line de C (como o Ideone, o Repl.it ou o OnlineGDB) — nesse caso, a biblioteca `math.h` normalmente já vem pronta para uso, sem necessidade de flags adicionais.

## 🧪 Exemplos de Uso

**Exemplo 1 — Soma**
```
Digite a opcao desejada:
1
Digite o primeiro numero:
10
Digite o segundo numero:
5
Resultado: 15.00
```

**Exemplo 2 — Área do círculo**
```
Digite a opcao desejada:
13
Digite o raio do circulo:
2
Area: 12.56
```

**Exemplo 3 — IMC**
```
Digite a opcao desejada:
20
Digite o peso em quilogramas:
70
Digite a altura em metros:
1.75
IMC: 22.86
Classificacao: Peso normal
```

**Exemplo 4 — Saindo do programa**
```
Digite a opcao desejada:
0
Programa encerrado.
```

## 🧠 Conceitos de Programação Utilizados

- **Entrada e saída de dados**: `scanf` para capturar os valores digitados pelo usuário e `printf` para exibir mensagens, menus e resultados na tela.
- **Estruturas condicionais**: uso extensivo de `if` e `else if` para decidir qual operação executar de acordo com a opção escolhida, e também para tratar casos especiais (como divisão por zero) e classificar resultados (como as faixas do IMC).
- **Estruturas de repetição**: o laço `while` mantém o programa rodando e voltando ao menu até que o usuário escolha a opção de sair (`0`), evitando que o programa precise ser reiniciado a cada cálculo.
- **Variáveis e tipos de dados**: uso de `int` para números inteiros (como a opção do menu e o número par/ímpar) e `float` para valores que podem ter casas decimais (como resultados de contas, medidas e temperaturas).
- **Operadores aritméticos e relacionais**: `+`, `-`, `*`, `/` para os cálculos e `==`, `>`, `<` para as comparações e decisões.
- **Operador módulo (`%`)**: usado para descobrir se um número é par ou ímpar, verificando o resto da divisão por 2.
- **Uso da biblioteca `math.h`**: a função `pow(base, expoente)` foi usada para calcular potências de forma mais clara — em vez de escrever `lado * lado`, o programa usa `pow(lado, 2)`, o que deixa explícito que se trata de uma potenciação. Essa função é aplicada na área do quadrado, na área do círculo, no volume do cubo e no cálculo do IMC.

## 👤 Identificação do Estudante

**Aluno:** Aluno
**Projeto:** Calculadora em C — 20 Operações
**Origem:** Convertido a partir de um fluxograma desenvolvido no Flowgorithm

---

*Feito com `printf`, `scanf`, muito café ☕ e um pouquinho de `math.h`.*
