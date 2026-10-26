# Cadastro de Equipamentos em C

Atividade prática da disciplina Desenvolvimento de Algoritmos e Programação em C, do curso de Análise e Desenvolvimento de Sistemas (UDF - Centro Universitário do Distrito Federal).

- Aluno: Pedro Henrique Lima Dos Santos
- Professora: Karla Roberto Sartin

## Sobre o projeto

Programa em C para cadastrar e consultar os equipamentos de um laboratório de informática. Os dados são gravados em um arquivo de texto, então continuam salvos depois que o programa é fechado.

## Funcionalidades

- Menu com as opções Cadastrar equipamento, Listar equipamentos e Sair
- Cadastro com nome, código de identificação e localização
- Gravação dos dados no arquivo `equipamentos.txt`
- Os registros antigos são mantidos a cada novo cadastro
- Listagem de todos os equipamentos cadastrados na tela

## Estrutura

```
cadastro-equipamentos/
├── main.c
└── README.md
```

O arquivo `equipamentos.txt` é criado automaticamente na primeira vez que um equipamento é cadastrado.

## Como executar

Pelo OnlineGDB:

1. Acesse https://www.onlinegdb.com/online_c_compiler
2. Selecione a linguagem C
3. Cole o conteúdo do `main.c`
4. Clique em Run

Pelo terminal, com o GCC instalado:

```
gcc main.c -o cadastro
./cadastro
```

## Exemplo de uso

```
===== CADASTRO DE EQUIPAMENTOS =====
1 - Cadastrar equipamento
2 - Listar equipamentos
3 - Sair
Escolha uma opcao: 1

Nome do equipamento: Notebook Dell
Codigo de identificacao: EQ-001
Localizacao: Lab 2
Equipamento cadastrado com sucesso!
```

Formato dos registros no `equipamentos.txt`:

```
Nome: Notebook Dell
Codigo: EQ-001
Localizacao: Lab 2
--------------------
```

## Funções de arquivo utilizadas

| Função | Uso no programa |
|--------|-----------------|
| `fopen()` | Abre o arquivo no modo `"a"` (cadastro) ou `"r"` (listagem) |
| `fprintf()` | Grava os dados do equipamento no arquivo |
| `fgets()` | Lê os dados digitados e as linhas do arquivo |
| `fclose()` | Fecha o arquivo depois do uso |

O modo `"a"` foi escolhido para acrescentar os novos registros ao final do arquivo sem apagar os que já existem.
