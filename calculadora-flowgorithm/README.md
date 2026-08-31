# 🧮 Calculadora - 20 Operações

## 📋 Informações Gerais

**Título da Atividade:** Calculadora Interativa com Múltiplas Operações Matemáticas  
**Nome do Aluno:** Aluno  
**Data de Desenvolvimento:** Agosto de 2026  
**Linguagem/Ferramenta:** Flowgorithm 2.11

---

## 🎯 Objetivo do Programa

Desenvolver uma calculadora interativa que implemente e integre **20 operações matemáticas distintas**, oferecendo uma interface amigável baseada em menu. O programa demonstra a aplicação prática de conceitos fundamentais de programação como estruturas de controle (laços e condicionais), validação de entrada e tratamento de casos especiais.

A calculadora serve como ferramenta educacional para consolidar conhecimentos em algoritmos, lógica de programação e desenvolvimento de aplicações com fluxo de controle estruturado.

---

## 📖 Descrição do Funcionamento

A calculadora funciona através de um **menu interativo em loop contínuo** que permite ao usuário escolher qual operação deseja realizar. Após selecionar uma opção numérica (1 a 20), o programa:

1. **Solicita os dados necessários** para a operação escolhida
2. **Realiza o cálculo** aplicando a fórmula matemática apropriada
3. **Exibe o resultado** de forma clara e organizada
4. **Retorna ao menu principal** para uma nova operação

O programa continua em execução até que o usuário escolha a opção **0 - Sair**, encerrando elegantemente com uma mensagem de despedida. Inclui **validações inteligentes** para impedir divisões por zero e outras operações matematicamente inválidas.

---

## 📊 Relação das 20 Funções Implementadas

| # | Operação | Descrição |
|---|----------|-----------|
| 1 | **Soma** | Adiciona dois números (a + b) |
| 2 | **Subtração** | Subtrai o segundo número do primeiro (a - b) |
| 3 | **Multiplicação** | Multiplica dois números (a × b) |
| 4 | **Divisão** | Divide o primeiro número pelo segundo (a ÷ b) - *com validação* |
| 5 | **Média Aritmética** | Calcula a média entre dois números ((a + b) ÷ 2) |
| 6 | **Porcentagem** | Calcula a porcentagem de um valor (valor × % ÷ 100) |
| 7 | **Regra de Três** | Resolve proporções simples (b × c ÷ a) - *com validação* |
| 8 | **Celsius para Fahrenheit** | Converte temperatura (C × 9 ÷ 5 + 32) |
| 9 | **Fahrenheit para Celsius** | Converte temperatura ((F - 32) × 5 ÷ 9) |
| 10 | **Perímetro do Quadrado** | Calcula o perímetro (lado × 4) |
| 11 | **Área do Quadrado** | Calcula a área (lado²) |
| 12 | **Área do Retângulo** | Calcula a área (base × altura) |
| 13 | **Área do Círculo** | Calcula a área (π × r²) usando π = 3.14 |
| 14 | **Volume do Cubo** | Calcula o volume (lado³) |
| 15 | **Juros Simples** | Calcula juros (capital × taxa × tempo ÷ 100) |
| 16 | **Desconto** | Calcula o desconto em uma compra |
| 17 | **Velocidade Média** | Calcula velocidade (distância ÷ tempo) - *com validação* |
| 18 | **Par ou Ímpar** | Classifica se um número é par ou ímpar |
| 19 | **Comparação entre Números** | Compara dois números indicando qual é maior |
| 20 | **IMC** ⭐ | Calcula Índice de Massa Corporal (peso ÷ altura²) com classificação |

### ⭐ Funções Obrigatórias

- **Função #20 - IMC** (Índice de Massa Corporal)
  - Cálculo: IMC = peso (kg) ÷ altura² (m)
  - Classificações automáticas:
    - IMC < 18,5: Abaixo do peso
    - 18,5 ≤ IMC < 25: Peso normal
    - 25 ≤ IMC < 30: Sobrepeso
    - IMC ≥ 30: Obesidade

- **Função #12 - Área do Retângulo**
  - Cálculo: Área = base × altura
  - Solicita base e altura como entrada

---

## 🚀 Instruções Básicas para Execução

### Pré-requisitos
- Ter o **Flowgorithm** instalado (versão 2.11 ou superior)
- Permissão de execução no arquivo `.fprg`

### Passos para Executar

1. **Abra o Flowgorithm**
   - Inicie o aplicativo Flowgorithm no seu computador

2. **Carregue o arquivo**
   - Clique em `Arquivo > Abrir`
   - Navegue até `calculadora-flowgorithm.fprg`
   - Selecione e abra o arquivo

3. **Execute o programa**
   - Clique no botão ▶️ **Executar** (ou pressione F5)
   - O programa abrirá uma janela de console

4. **Interaja com o menu**
   - Veja o menu de opções exibido
   - Digite o número da operação desejada (1-20)
   - Pressione **Enter** para confirmar

5. **Insira os dados**
   - Quando solicitado, digite os valores necessários
   - Pressione **Enter** após cada entrada
   - O resultado será exibido imediatamente

6. **Volte ao menu**
   - Após cada operação, o menu é exibido novamente
   - Escolha outra operação ou digite **0** para sair

### Exemplo de Uso

```
CALCULADORA
1 - Soma
2 - Subtracao
...
20 - IMC
0 - Sair
Digite a opcao desejada: 1

Digite o primeiro numero: 10
Digite o segundo numero: 5
Resultado: 15

CALCULADORA
1 - Soma
...
```

---

## 💡 Características Especiais

✅ **Menu Interativo** - Interface amigável e intuitiva  
✅ **Validações** - Proteção contra divisão por zero  
✅ **Loop Contínuo** - Permite múltiplas operações sem reiniciar  
✅ **Classificações Automáticas** - IMC com categorização  
✅ **Precisão Matemática** - Cálculos com números reais  
✅ **Navegação Fácil** - Saída segura com opção 0  

---

## 📝 Notas Importantes

- O programa utiliza **π = 3.14** para cálculos de área circular
- **Validações especiais** estão implementadas para:
  - Divisão por zero
  - Regra de três com primeiro valor zero
  - Velocidade média com tempo zero
  - IMC com altura zero

- Use **números reais** para operações que envolvem decimais
- Use **números inteiros** para a operação de par/ímpar

---

## 📚 Conceitos Abordados

- Estruturas de controle (`while`, `if/else`)
- Validação de entrada e tratamento de erros
- Operadores matemáticos e lógicos
- Variáveis e tipos de dados
- Fluxo de programa e loops
- Interface baseada em menu

---

**Desenvolvido como atividade educacional de Lógica de Programação**

