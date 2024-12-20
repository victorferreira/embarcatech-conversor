#include <stdio.h>

int main(int argc, char const *argv[])
{
    int umo,umf;
    double v,res; 

    /* 
    v -> Valor; 
    umo -> Unidade de Medida Original; 
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
        printf("\n3 -> Metros Cubicos\n");
        scanf("%d",&umo);
    } while (umo<1 || umo > 3);

    /*O trecho de código acima recebe o valor original para a conversão */

    do
    {
        printf("\nDigite a Unidade de medida para a qual deseja converter: ");
        printf("\n1 -> Litros");
        printf("\n2 -> Mililitros");
        printf("\n3 -> Metros Cubicos\n");
        scanf("%d",&umf);
    } while (umf<1 || umf > 3);
    
    /*O trecho de código acima recebe o tipo para o qual se deseja fazer a conversão */


    return 0;
}
