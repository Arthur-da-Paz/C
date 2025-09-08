#include <stdio.h>
#include <math.h>

int main()
{
    char operassao;
    int n1 = 0, n2 = 0, resultado = 0, aux = 1;
    float f1 = 0, f2 = 0, resultadof = 0;

    printf("--------------------\nBem vindo a sua calculadora!");

    while (1)
    {

        printf("\n--------------------\nDigite a expressao que deseja realizar\n--------------------\n(|+| |-| |*| |/| |^| |!| |%%| |q, raiz quadrada| |r, raiz n-esima| |x, sair|)\n--------------------\n");
        scanf(" %c", &operassao);

        if (operassao == 'x')
        {
            printf("--------------------\nEncerrando calculadora...\n--------------------\n");
            break;
        }

        if (operassao == '+' || operassao == '-' || operassao == '*' || operassao == '/' || operassao == '^')
        {
            printf("--------------------\nDigite o primeiro numero: \n--------------------\n");
            scanf("%d", &n1);

            printf("--------------------\nDigite o primeiro numero: \n--------------------\n");
            scanf("%d", &n2);
        }
        else if (operassao == '%')
        {
            printf("--------------------\nDigite o primeiro numero (percentual): \n--------------------\n");
            scanf("%f", &f1);

            printf("--------------------\nDigite o segundo numero (valor base): \n--------------------\n");
            scanf("%f", &f2);
        }
        else if (operassao == '!')
        {
            printf("--------------------\nDigite o numero: \n--------------------\n");
            scanf("%d", &n1);
        }
        else
        {
            printf("--------------------\nDigite o primeiro numero (radicando): \n--------------------\n");
            scanf("%f", &f1);

            if (operassao == 'r')
            {
                printf("--------------------\nDigite o segundo numero (raiz): \n--------------------\n");
                scanf("%f", &f2);
            }
        }

        switch (operassao)
        {
        case '+':
            resultado = n1 + n2;
            printf("%d %c %d = %d\n", n1, operassao, n2, resultado);
            break;

        case '-':
            resultado = n1 - n2;
            printf("%d %c %d = %d\n", n1, operassao, n2, resultado);
            break;

        case '*':
            resultado = n1 * n2;
            printf("%d %c %d = %d\n", n1, operassao, n2, resultado);
            break;

        case '/':
            if (n2 == 0)
            {
                printf("Nao e possivel divisao por 0\n");
            }
            else
            {
                resultado = n1 / n2;
                printf("%d %c %d = %d\n", n1, operassao, n2, resultado);
            }
            break;

        case '^':
            resultado = pow(n1, n2);
            printf("%d ^ %d = %d\n", n1, n2, resultado);
            break;

        case '!':
            if(n1 <= 0){
                printf("Impossivel radiciacao com numero negativo");
                break;
            }
            else {
                aux = 1;
            for (int i = 1; i <= n1; i++)
            {
                aux *= i;
            }
            printf("%d! = %d\n", n1, aux);
            break;
            }

        case '%':
            resultadof = (f1 / 100) * f2;
            printf("%.2f%% de %.2f = %.2f\n", f1, f2, resultadof);
            break;

        case 'q':
            resultadof = sqrt(f1);
            printf("Raiz quadrada de %.2f = %.2f\n", f1, resultadof);
            break;

        case 'r':
            resultadof = pow(f1, 1.0 / f2);
            printf("Raiz %.0f de %.0f = %.2f\n", f2, f1, resultadof);
            break;

        default:
            printf("Operacao invalida\n");
        }
    }

    return 0;
}