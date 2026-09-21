# Sistema de Monitoramento Industrial

## Sobre o projeto

Este projeto foi desenvolvido em **linguagem C** como atividade da disciplina de programação.

O objetivo é criar um sistema simples para monitorar temperaturas de um ambiente industrial.

O programa recebe um **limite de temperatura** informado pelo usuário e, depois, começa a receber várias temperaturas.

O programa continua funcionando até que sejam informadas **3 temperaturas consecutivas acima do limite**.

## O que o programa faz

Durante a execução, o programa:

- Recebe o limite de temperatura.
- Verifica se o limite informado é válido.
- Recebe as temperaturas informadas pelo usuário.
- Calcula a média das temperaturas.
- Identifica a maior temperatura.
- Identifica a menor temperatura.
- Conta quantas temperaturas ficaram acima do limite.
- Conta quantas temperaturas ficaram consecutivamente acima do limite.
- Encerra o programa quando acontecem 3 temperaturas consecutivas acima do limite.

## Estruturas utilizadas

Neste projeto foram utilizadas principalmente as estruturas de repetição estudadas em aula:

- `do...while`
- `while`

O `do...while` foi utilizado para pedir o limite de temperatura e verificar se o valor informado é válido.

O `while` foi utilizado para continuar recebendo temperaturas até que aconteçam 3 temperaturas consecutivas acima do limite.

Também foram utilizados:

- `if`
- `else`
- variáveis do tipo `int`
- variáveis do tipo `float`
- `scanf`
- `printf`

## Como funciona

Primeiro, o usuário informa o limite de temperatura.

Exemplo:

```text
Digite o limite de temperatura: 50
```

Depois, o programa começa a pedir as temperaturas:

```text
Digite a temperatura: 40
Dentro do limite.

Digite a temperatura: 60
Acima do limite!

Digite a temperatura: 70
Acima do limite!

Digite a temperatura: 80
Acima do limite!
```

Nesse exemplo, foram informadas 3 temperaturas consecutivas acima de 50 °C, então o programa é encerrado.

## Resultado final

Quando o programa é encerrado, ele mostra um relatório com os resultados:

```text
=== RELATORIO FINAL ===
Limite: 50.00
Quantidade de temperaturas: 4
Media: 62.50
Maior temperatura: 80.00
Menor temperatura: 40.00
Acima do limite: 3
```

## Validação

O programa também verifica se o usuário digitou um número válido.

Caso seja digitado algo que não seja um número, o programa informa:

```text
Entrada invalida! Digite um numero.
```

Além disso, o limite de temperatura precisa ser maior que zero.

## Objetivo da atividade

O projeto tem como objetivo colocar em prática os conceitos de **estruturas de repetição**, principalmente `while` e `do...while`, trabalhando também com condições, variáveis, cálculos e entrada de dados.

## Linguagem utilizada

**C**

## Autor

Desenvolvido por **Pedro Henrique**.

Projeto acadêmico desenvolvido para a disciplina de programação.
