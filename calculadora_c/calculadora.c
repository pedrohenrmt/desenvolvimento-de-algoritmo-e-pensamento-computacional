#include <stdio.h>
#include <math.h>

int main()
{
    int opcao, numeroInteiro;
    float numero1, numero2, numero3, resultado;
    float valor, percentual, lado, base, altura, raio;
    float temperatura, taxa, tempo, distancia, peso, imc;

    opcao = -1;

    while (opcao != 0)
    {
        printf("CALCULADORA\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Media aritmetica\n");
        printf("6 - Porcentagem\n");
        printf("7 - Regra de tres\n");
        printf("8 - Celsius para Fahrenheit\n");
        printf("9 - Fahrenheit para Celsius\n");
        printf("10 - Perimetro do quadrado\n");
        printf("11 - Area do quadrado\n");
        printf("12 - Area do retangulo\n");
        printf("13 - Area do circulo\n");
        printf("14 - Volume do cubo\n");
        printf("15 - Juros simples\n");
        printf("16 - Desconto\n");
        printf("17 - Velocidade media\n");
        printf("18 - Par ou impar\n");
        printf("19 - Comparacao entre numeros\n");
        printf("20 - IMC\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada:\n");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numero1);
            printf("Digite o segundo numero:\n");
            scanf("%f", &numero2);
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 2)
        {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numero1);
            printf("Digite o segundo numero:\n");
            scanf("%f", &numero2);
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 3)
        {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numero1);
            printf("Digite o segundo numero:\n");
            scanf("%f", &numero2);
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 4)
        {
            printf("Digite o dividendo:\n");
            scanf("%f", &numero1);
            printf("Digite o divisor:\n");
            scanf("%f", &numero2);
            if (numero2 == 0)
            {
                printf("Nao e possivel dividir por zero.\n");
            }
            else
            {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            }
        }
        else if (opcao == 5)
        {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numero1);
            printf("Digite o segundo numero:\n");
            scanf("%f", &numero2);
            resultado = (numero1 + numero2) / 2;
            printf("Media: %.2f\n", resultado);
        }
        else if (opcao == 6)
        {
            printf("Digite o valor:\n");
            scanf("%f", &valor);
            printf("Digite a porcentagem:\n");
            scanf("%f", &percentual);
            resultado = valor * percentual / 100;
            printf("Resultado: %.2f\n", resultado);
        }
        else if (opcao == 7)
        {
            printf("Digite o primeiro valor conhecido:\n");
            scanf("%f", &numero1);
            printf("Digite o segundo valor conhecido:\n");
            scanf("%f", &numero2);
            printf("Digite o terceiro valor:\n");
            scanf("%f", &numero3);
            if (numero1 == 0)
            {
                printf("Nao e possivel fazer a regra de tres com o primeiro valor igual a zero.\n");
            }
            else
            {
                resultado = numero2 * numero3 / numero1;
                printf("Resultado: %.2f\n", resultado);
            }
        }
        else if (opcao == 8)
        {
            printf("Digite a temperatura em Celsius:\n");
            scanf("%f", &temperatura);
            resultado = temperatura * 9 / 5 + 32;
            printf("Temperatura em Fahrenheit: %.2f\n", resultado);
        }
        else if (opcao == 9)
        {
            printf("Digite a temperatura em Fahrenheit:\n");
            scanf("%f", &temperatura);
            resultado = (temperatura - 32) * 5 / 9;
            printf("Temperatura em Celsius: %.2f\n", resultado);
        }
        else if (opcao == 10)
        {
            printf("Digite o lado do quadrado:\n");
            scanf("%f", &lado);
            resultado = lado * 4;
            printf("Perimetro: %.2f\n", resultado);
        }
        else if (opcao == 11)
        {
            printf("Digite o lado do quadrado:\n");
            scanf("%f", &lado);
            resultado = lado * lado;
            printf("Area: %.2f\n", resultado);
        }
        else if (opcao == 12)
        {
            printf("Digite a base do retangulo:\n");
            scanf("%f", &base);
            printf("Digite a altura do retangulo:\n");
            scanf("%f", &altura);
            resultado = base * altura;
            printf("Area: %.2f\n", resultado);
        }
        else if (opcao == 13)
        {
            printf("Digite o raio do circulo:\n");
            scanf("%f", &raio);
            resultado = 3.14 * raio * raio;
            printf("Area: %.2f\n", resultado);
        }
        else if (opcao == 14)
        {
            printf("Digite o lado do cubo:\n");
            scanf("%f", &lado);
            resultado = lado * lado * lado;
            printf("Volume: %.2f\n", resultado);
        }
        else if (opcao == 15)
        {
            printf("Digite o valor inicial:\n");
            scanf("%f", &valor);
            printf("Digite a taxa de juros em porcentagem:\n");
            scanf("%f", &taxa);
            printf("Digite o tempo:\n");
            scanf("%f", &tempo);
            resultado = valor * taxa * tempo / 100;
            printf("Juros: %.2f\n", resultado);
            printf("Valor final: %.2f\n", valor + resultado);
        }
        else if (opcao == 16)
        {
            printf("Digite o valor da compra:\n");
            scanf("%f", &valor);
            printf("Digite a porcentagem de desconto:\n");
            scanf("%f", &percentual);
            resultado = valor * percentual / 100;
            printf("Desconto: %.2f\n", resultado);
            printf("Valor final: %.2f\n", valor - resultado);
        }
        else if (opcao == 17)
        {
            printf("Digite a distancia:\n");
            scanf("%f", &distancia);
            printf("Digite o tempo:\n");
            scanf("%f", &tempo);
            if (tempo == 0)
            {
                printf("Nao e possivel dividir por zero.\n");
            }
            else
            {
                resultado = distancia / tempo;
                printf("Velocidade media: %.2f\n", resultado);
            }
        }
        else if (opcao == 18)
        {
            printf("Digite um numero inteiro:\n");
            scanf("%d", &numeroInteiro);
            if (numeroInteiro % 2 == 0)
            {
                printf("O numero e par.\n");
            }
            else
            {
                printf("O numero e impar.\n");
            }
        }
        else if (opcao == 19)
        {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &numero1);
            printf("Digite o segundo numero:\n");
            scanf("%f", &numero2);
            if (numero1 > numero2)
            {
                printf("O primeiro numero e maior.\n");
            }
            else if (numero1 < numero2)
            {
                printf("O segundo numero e maior.\n");
            }
            else
            {
                printf("Os numeros sao iguais.\n");
            }
        }
        else if (opcao == 20)
        {
            printf("Digite o peso em quilogramas:\n");
            scanf("%f", &peso);
            printf("Digite a altura em metros:\n");
            scanf("%f", &altura);
            if (altura == 0)
            {
                printf("A altura nao pode ser zero.\n");
            }
            else
            {
                imc = peso / (altura * altura);
                printf("IMC: %.2f\n", imc);
                if (imc < 18.5)
                {
                    printf("Classificacao: Abaixo do peso\n");
                }
                else if (imc < 25)
                {
                    printf("Classificacao: Peso normal\n");
                }
                else if (imc < 30)
                {
                    printf("Classificacao: Sobrepeso\n");
                }
                else
                {
                    printf("Classificacao: Obesidade\n");
                }
            }
        }
        else if (opcao == 0)
        {
            printf("Programa encerrado.\n");
        }
        else
        {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}
