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
void conversor_volume();
void conversor_temperatura();
void conversor_velocidade();
void conversor_potencia();
void conversor_area();
void conversor_tempo();
void conversor_dados();
void menu();

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
