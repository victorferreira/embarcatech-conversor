#include <stdio.h>

#define BITS_IN_BYTE 8
#define BYTES_IN_MB 1048576 // 1024 * 1024
#define BYTES_IN_GB 1073741824 // 1024 * 1024 * 1024

void print_menu() {
    printf("\nSelecione unidade:\n");
    printf("1. Bit\n");
    printf("2. Byte\n");
    printf("3. Megabyte (MB)\n");
    printf("4. Gigabyte (GB)\n");
    printf("Sua opção: ");
}

double convert(int from, int to, double value) {
    double bytes;
    switch (from) {
        case 1:
            bytes = value / BITS_IN_BYTE;
            break;
        case 2:
            bytes = value;
            break;
        case 3:
            bytes = value * BYTES_IN_MB;
            break;
        case 4:
            bytes = value * BYTES_IN_GB;
            break;
        default:
            printf("Opção inválida!\n");
            return -1;
    }

    switch (to) {
        case 1:
            return bytes * BITS_IN_BYTE;
        case 2:
            return bytes;
        case 3:
            return bytes / BYTES_IN_MB;
        case 4:
            return bytes / BYTES_IN_GB;
        default:
            printf("Opção inválida!\n");
            return -1;
    }
}

int main() {
    int input_unit, output_unit;
    double value, result;

    printf("Conversor de Unidade: Bit, Byte, MB, GB\n");

    print_menu();
    scanf("%d", &input_unit);

    printf("Selecione unidade:\n");
    printf("1. Bit\n");
    printf("2. Byte\n");
    printf("3. Megabyte (MB)\n");
    printf("4. Gigabyte (GB)\n");
    printf("Sua opção: ");
    scanf("%d", &output_unit);

    printf("Valor a ser convertido: ");
    scanf("%lf", &value);

    result = convert(input_unit, output_unit, value);

    if (result >= 0) {
        printf("\nResultado: %.6f\n", result);
    }

    return 0;
}
