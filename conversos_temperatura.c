#include <stdio.h>
#include <stdlib.h>

void conversor_temperatura();

// conversor de temperatura
void conversor_temperatura() {
    int opcao;
    float temperatura, resultado;
    
    printf("\n=== Conversor de Temperatura ===\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    
    switch(opcao) {
        case 1:
            resultado = (temperatura * 9/5) + 32;
            printf("%.2f°C = %.2f°F\n", temperatura, resultado);
            break;
        case 2:
            resultado = (temperatura - 32) * 5/9;
            printf("%.2f°F = %.2f°C\n", temperatura, resultado);
            break;
        case 3:
            resultado = temperatura + 273.15;
            printf("%.2f°C = %.2f K\n", temperatura, resultado);
            break;
        case 4:
            resultado = temperatura - 273.15;
            printf("%.2f K = %.2f°C\n", temperatura, resultado);
            break;
        default:
            printf("Opção inválida!\n");
    }
}
