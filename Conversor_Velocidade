#include <stdio.h> // Inclui a biblioteca padrão para entrada e saída (printf, scanf).

// Função para converter velocidade de km/h para m/s.
float kmhParaMps(float kmh) {
    return kmh / 3.6; // Conversão direta, 1 km/h é igual a 1/3.6 m/s.
}

// Função para converter velocidade de m/s para km/h.
float mpsParaKmh(float mps) {
    return mps * 3.6; // Conversão direta, 1 m/s é igual a 3.6 km/h.
}

// Função para converter velocidade de km/h para mph (milhas por hora).
float kmhParaMph(float kmh) {
    return kmh * 0.621371; // Conversão direta, 1 km/h é igual a 0.621371 mph.
}

// Função para converter velocidade de mph para km/h.
float mphParaKmh(float mph) {
    return mph / 0.621371; // Conversão direta, 1 mph é igual a 1/0.621371 km/h.
}

// Função que gerencia o processo de conversão de velocidades.
void converterVelocidade() {
    int opcao;          // Variável para armazenar a escolha do usuário.
    float valor;        // Variável para armazenar o valor de entrada.
    float resultado;    // Variável para armazenar o valor convertido.

    // Loop para garantir que o usuário escolha uma opção válida.
    do {
        printf("Escolha a conversão:\n");
        printf("1. km/h para m/s\n");
        printf("2. m/s para km/h\n");
        printf("3. km/h para mph\n");
        printf("4. mph para km/h\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao); // Lê a opção do usuário.

        if (opcao < 1 || opcao > 4) { // Verifica se a opção é inválida.
            printf("Opção inválida! Por favor, escolha novamente.\n");
        }
    } while (opcao < 1 || opcao > 4); // Repete enquanto a opção for inválida.

    // Executa a conversão baseada na opção escolhida.
    switch(opcao) {
        case 1: // km/h para m/s.
            printf("Digite o valor em km/h: ");
            scanf("%f", &valor); // Lê o valor em km/h.
            resultado = kmhParaMps(valor); // Chama a função de conversão.
            printf("%.2f km/h = %.2f m/s\n", valor, resultado); // Exibe o resultado.
            break;
        case 2: // m/s para km/h.
            printf("Digite o valor em m/s: ");
            scanf("%f", &valor); // Lê o valor em m/s.
            resultado = mpsParaKmh(valor); // Chama a função de conversão.
            printf("%.2f m/s = %.2f km/h\n", valor, resultado); // Exibe o resultado.
            break;
        case 3: // km/h para mph.
            printf("Digite o valor em km/h: ");
            scanf("%f", &valor); // Lê o valor em km/h.
            resultado = kmhParaMph(valor); // Chama a função de conversão.
            printf("%.2f km/h = %.2f mph\n", valor, resultado); // Exibe o resultado.
            break;
        case 4: // mph para km/h.
            printf("Digite o valor em mph: ");
            scanf("%f", &valor); // Lê o valor em mph.
            resultado = mphParaKmh(valor); // Chama a função de conversão.
            printf("%.2f mph = %.2f km/h\n", valor, resultado); // Exibe o resultado.
            break;
    }
}

// Função principal que controla o fluxo do programa.
int main() {
    int opcao; // Variável para armazenar a escolha do usuário.

    // Loop principal do programa.
    do {
        printf("\nEscolha o tipo de conversão:\n");
        printf("1. Unidades de velocidade\n"); // Exibe a opção de conversão de velocidade.
        printf("0. Sair\n"); // Exibe a opção para encerrar o programa.
        printf("Digite sua opção: ");
        scanf("%d", &opcao); // Lê a opção do usuário.

        // Executa a ação correspondente à escolha do usuário.
        switch(opcao) {
            case 1: // Caso o usuário escolha conversão de velocidade.
                converterVelocidade(); // Chama a função para gerenciar a conversão de velocidades.
                break;
            case 0: // Caso o usuário escolha encerrar o programa.
                printf("Encerrando o programa.\n");
                break;
            default: // Caso o usuário digite uma opção inválida.
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 0); // Repete enquanto o usuário não escolher encerrar.

    return 0; // Retorna 0, indicando que o programa terminou com sucesso.
}
