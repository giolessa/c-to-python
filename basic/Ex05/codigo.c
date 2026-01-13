/******************************************************************************

 Desenvolva um algoritmo que
calcule o consumo de combustível de um
automóvel em determinada viagem. Para isso,
devem ser obtidos: 
i) o percurso (em quilômetros) da viagem; 
ii) o número de quilômetros que o carro percorre com um litro
de combustível (km/l); 
iii) o preço do litro do combustível.

Ao final, o algoritmo deve determinar:
1. A quantidade de combustível, em litros,
consumida durante a viagem;
1. O custo total de combustível.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float percurso, kmLitros, preco, combustivel, precoTotal;       //Definindo as váriaveis 
    
    printf("Informe o percurso(em quilômetros) da viagem: ");
    scanf("%f", &percurso);
    
    printf("Informe o número de quiômetros que o carro percorre com um litro de combustivel: ");
    scanf("%f", &kmLitros);
    
    printf("Informe o preço do litro do combustivel: ");
    scanf("%f", &preco);
    
    combustivel = percurso/kmLitros;
    precoTotal = preco * combustivel;
    
    printf("A quantidade de combustível consumida %2.f\n", combustivel);
    printf("Custo total do combustível: %2.f\n", precoTotal);
  

    return 0;
}

