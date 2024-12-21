#include <stdio.h>
#include <stdlib.h>

int main()
{
    int umo,umf;
    double v; 

    /* 
    v -> Valor
    umo -> Unidade de Medida Original
    umf -> Unidade de Medida Final
    res -> Resultado
    */

    printf("\nDigite o Valor que deseja converter: ");
    scanf("%lf",&v);
    do
    {
        printf("\nDigite a Unidade de medida dele: ");
        printf("\n1 -> Litros");
        printf("\n2 -> Mililitros");
        printf("\n3 -> Metros Cubicos");
        printf("\n4 -> Centimetros Cubicos");
        printf("\n5 -> Decimetros Cubicos\n");
        scanf("%d",&umo);
    } while (umo<1 || umo > 5);

    /*O trecho de código acima recebe o valor original para a conversão */

    switch (umo)
    {
    case 1:
        v = v /1000;
        break;
    case 2:
        v = v /1000000;
        break;
    case 3:
        v = v;
        break;
    case 4:
        v = v /100;
        break;
    case 5:
        v = v /10;
        break; 
    default:
        printf("ERRO - UNIDADE DE MEDIDA INESPERADA");
        exit(1);
        break;
    }

    /*O trecho de código acima converte o valor recebido para metros cúbicos*/

    do
    {
        printf("\nDigite a Unidade de medida para a qual deseja converter: ");
        printf("\n1 -> Litros");
        printf("\n2 -> Mililitros");
        printf("\n3 -> Metros Cubicos");
        printf("\n4 -> Centimetros Cubicos");
        printf("\n5 -> Decimetros Cubicos\n");
        scanf("%d",&umf);
    } while (umf<1 || umf > 5);
    
    /*O trecho de código acima recebe o tipo para o qual se deseja fazer a conversão */

    switch (umf)
    {
    case 1:
        v *= 1000;
        break;
    case 2:
        v = v *1000000;
        break;
    case 3:
        v = v;
        break;
    case 4:
        v = v *100;
        break;
    case 5:
        v = v *10;
        break; 
    default:
        printf("ERRO - UNIDADE DE MEDIDA INESPERADA");
        exit(1);
        break;
    }

     /*O trecho de código acima converte o valor em metros cúbicos para a opção desejada*/

    printf("\nO valor que voce digitou equivale a %.0lf.\n",v);
    return 0;
}
