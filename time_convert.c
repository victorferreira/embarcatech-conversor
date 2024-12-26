#include <stdio.h>

void print_menu() {
    printf("\nSelecione unidade de tempo:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
    printf("Sua escolha: ");
}

double convert_time(int from, int to, double value) {
    double seconds;
    switch (from) {
        case 1:
            seconds = value;
            break;
        case 2:
            seconds = value * 60;
            break;
        case 3:
            seconds = value * 3600;
            break;
        default:
            printf("Input inválido!\n");
            return -1;
    }

    switch (to) {
        case 1:
            return seconds;
        case 2:
            return seconds / 60;
        case 3:
            return seconds / 3600;
        default:
            printf("Input inválido!\n");
            return -1;
    }
}

int main() {
    int input_unit, output_unit;
    double value, result;

    printf("Conversosr de tempo: segundos, minutos, horas...\n");

    print_menu();
    scanf("%d", &input_unit);

    printf("Selecione a unidade:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
    printf("Sua escolha: ");
    scanf("%d", &output_unit);

    printf("Digite valor a ser convertido: ");
    scanf("%lf", &value);

    result = convert_time(input_unit, output_unit, value);

    if (result >= 0) {
        printf("\nResultado: %.6f\n", result);
    }

    return 0;
}
