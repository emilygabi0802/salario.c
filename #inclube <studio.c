#inclube <studio.h>

int main () {
    // Declaração das variáveis para os salários e a soma 
    float salario1, salario2, salario3;
    float somaSalarios, novoSalarios2;

    // 1. Capturar os 3 salários
    printf("Digite os 3 salário\n");
    printf("Digite o primeiro salario: R$");
    // Usamos %s para ter um numero de ponto flutuante (float)
    if (scanf("%f", &salario1) != 1) {
        printf("Erro ao leo o primeiro salario.\n");
        return 1; // Retorna um código de erro
    }

    printf("Digite o segundo salario: R$ ");
    if (scanf("%f", &salario2) != 1) {
        printf("Erro ao ler o segundo salario.\n");
        return 1;
    }

    printf("Digite o terceiro salario: R$ ");
    if (scanf("%f", &salario3) != 1) {
        printf("Erro ao ler o terceiro salario.\n");
        return 1;
    }

    // 2. Acrescentar 10% ao segundo salário
    // 10% de salario2 é igual a salario2 