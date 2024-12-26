#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções de conversão
void conversor_comprimento();
void conversor_massa();
void conversor_volume();
void conversor_temperatura();
void conversor_velocidade();
void conversor_potencia();
void conversor_area();
void conversor_tempo();
void conversor_dados();
void menu();

#include <stdio.h>
#include <stdlib.h>

// Protótipos das funções de conversão
void conversor_comprimento();
void conversor_massa();

void conversor_volume() {
    double valor = LerValorEmMC();
    valor = Converter(valor);
    printf("\nO valor convertido é %.0lf.\n", valor);
};

void conversor_temperatura();
void conversor_velocidade(){
    int opcao;
    float valor, resultado;
    
    do {
        printf("\n=== Conversor de Velocidade ===\n");
        printf("1. km/h para m/s\n");
        printf("2. m/s para km/h\n");
        printf("3. km/h para mph\n");
        printf("4. mph para km/h\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 4) {
            printf("Opção inválida! Por favor, escolha novamente.\n");
        }
    } while (opcao < 1 || opcao > 4);

    switch(opcao) {
        case 1:
            printf("Digite o valor em km/h: ");
            scanf("%f", &valor);
            resultado = kmhParaMps(valor);
            printf("%.2f km/h = %.2f m/s\n", valor, resultado);
            break;
        case 2:
            printf("Digite o valor em m/s: ");
            scanf("%f", &valor);
            resultado = mpsParaKmh(valor);
            printf("%.2f m/s = %.2f km/h\n", valor, resultado);
            break;
        case 3:
            printf("Digite o valor em km/h: ");
            scanf("%f", &valor);
            resultado = kmhParaMph(valor);
            printf("%.2f km/h = %.2f mph\n", valor, resultado);
            break;
        case 4:
            printf("Digite o valor em mph: ");
            scanf("%f", &valor);
            resultado = mphParaKmh(valor);
            printf("%.2f mph = %.2f km/h\n", valor, resultado);
            break;
    }
};
void conversor_potencia();
void conversor_area();
void conversor_tempo();
void conversor_dados();
void menu();

// protótipo das funções auxiliares de velocidade
float kmhParaMps(float kmh){
    return kmh / 3.6;
};
float mpsParaKmh(float mps){
    return mps * 3.6;
};
float kmhParaMph(float kmh){
    return kmh * 0.621371;
};
float mphParaKmh(float mph){
    return mph / 0.621371;
};

// funções auxiliares de volume
double LerValorEmMC() 
{
    double v;
    int umo;

    printf("\nDigite o Valor que deseja converter: ");
    scanf("%lf", &v);
    do {
        printf("\nDigite a Unidade de medida dele: ");
        printf("\n1 -> Litros");
        printf("\n2 -> Mililitros");
        printf("\n3 -> Metros Cubicos");
        printf("\n4 -> Centimetros Cubicos");
        printf("\n5 -> Decimetros Cubicos\n");
        scanf("%d", &umo);
    } while (umo < 1 || umo > 5);

    switch (umo) {
        case 1:
            v = v / 1000;
            break;
        case 2:
            v = v / 1000000;
            break;
        case 3:
            v = v;
            break;
        case 4:
            v = v / 100;
            break;
        case 5:
            v = v / 10;
            break;
        default:
            printf("ERRO - UNIDADE DE MEDIDA INESPERADA");
            exit(1);
            break;
    }

    return v;
};
double Converter(double v) {
    int umf;

    do {
        printf("\nDigite a Unidade de medida para a qual deseja converter: ");
        printf("\n1 -> Litros");
        printf("\n2 -> Mililitros");
        printf("\n3 -> Metros Cubicos");
        printf("\n4 -> Centimetros Cubicos");
        printf("\n5 -> Decimetros Cubicos\n");
        scanf("%d", &umf);
    } while (umf < 1 || umf > 5);

    switch (umf) {
        case 1:
            v *= 1000;
            break;
        case 2:
            v *= 1000000;
            break;
        case 3:
            v = v;
            break;
        case 4:
            v *= 100;
            break;
        case 5:
            v *= 10;
            break;
        default:
            printf("ERRO - UNIDADE DE MEDIDA INESPERADA");
            exit(1);
            break;
    }

    return v;
};


// Função principal que apenas inicia o programa
int main() {
    menu();
    return 0;
}

// Função que exibe o e gerencia o menu principal

void menu() {
    int opcao;
    
    do {
        printf("\n=== Conversor de Unidades ===\n");
        printf("1. Conversor de Comprimento\n");
        printf("2. Conversor de Massa\n");
        printf("3. Conversor de Volume\n");
        printf("4. Conversor de Temperatura\n");
        printf("5. Conversor de Velocidade\n");
        printf("6. Conversor de Potência\n");
        printf("7. Conversor de Área\n");
        printf("8. Conversor de Tempo\n");
        printf("9. Conversor de Dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                conversor_comprimento();
                break;
            case 2:
                conversor_massa();
                break;
            case 3:
                conversor_volume();
                break;
            case 4:
                conversor_temperatura();
                break;
            case 5:
                conversor_velocidade();
                break;
            case 6:
                conversor_potencia();
                break;
            case 7:
                conversor_area();
                break;
            case 8:
                conversor_tempo();
                break;
            case 9:
                conversor_dados();
                break;
            case 0:
                printf("Programa encerrado!\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 0);
}

