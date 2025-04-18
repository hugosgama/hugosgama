#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;

    // Solicita ao usuário para inserir o operador e os números
    printf("Digite um operador (+, -, *, /, %%): ");
    scanf("%c", &operador);

    printf("Digite dois números: ");
    scanf("%lf %lf", &num1, &num2);

    // Realiza a operação com base no operador inserido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisão por zero!\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = (int)num1 % (int)num2; // Converte para int para usar o operador %
            } else {
                printf("Erro: Divisão por zero!\n");
                return 1; // Encerra o programa com código de erro
            }
            break;
        default:
            printf("Erro: Operador inválido!\n");
            return 1; // Encerra o programa com código de erro
    }

    // Exibe o resultado
    printf("Resultado: %.2lf %c %.2lf = %.2lf\n", num1, operador, num2, resultado);

    return 0; // Encerra o programa com sucesso
}