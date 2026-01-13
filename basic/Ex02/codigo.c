/******************************************************************************

2. Escrever um algoritmo que
obtenha o peso de uma pessoa na Terra e o
número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no
planeta escolhido.

1 Mercúrio 0,37
2 Vênus 0,88
3 Marte 0,38
4 Júpiter 2,64
5 Saturno 1,15
6 Urano 1,17

Para calcular o peso no planeta escolhido,
utilize a seguinte fórmula:
pesoPlaneta = (pesoTerra/10) * gravidadePlaneta

*******************************************************************************/

#include <stdio.h>

int main()
{
    float pesoPlaneta, pesoTerra, gravidade;
    int planeta;                                //Definindo as váriaveis 
    
    printf("Informe seu peso na Terra: ");
    scanf("%f", &pesoTerra);
    
    printf("Informe o número do planeta desejado: ");
    printf("\n 1. Mercúrio - 0,37 \n 2. Venus - 0,88\n 3. Marte - 0,38\n 4. Jupiter - 2,64\n 5. Saturno - 1,15\n 6. Urano - 1,17\n");
    scanf("%d", &planeta);
    
   switch(planeta) {
       
       case 1:
            gravidade = 0.37;
            break;
        case 2:
            gravidade = 0.88;
            break;
        case 3:
            gravidade = 0.38;
            break;
        case 4:
            gravidade = 2.64;
            break;
        case 5:
            gravidade = 1.15;
            break;
        case 6:
            gravidade = 1.17;
            break;
   }
   
   pesoPlaneta = (pesoTerra/10) * gravidade;
   
   printf("Seu peso no planeta escolhido é: %.2f.", pesoPlaneta);

    

    return 0;
}

