/******************************************************************************

 01: O IMC (Índice de Massa Corporal)
é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de
peso de uma pessoa adulta. A fórmula é:
IMC = peso / altura^2

Elabore um algoritmo que, dados o peso e a
altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:

IMC < 18,5 Abaixo do peso
18,5 ≤ IMC < 25,0 Peso ideal
25,0 ≤ IMC < 30,0 Sobrepeso
30,0 ≤ IMC < 35,0 Obesidade grau I
35,0 ≤ IMC < 40,0 Obesidade grau II
IMC ≥ 40,0 Obesidade grau III

*******************************************************************************/

#include <stdio.h>

int main()
{
    float peso, altura, imc; //Definindo as variáveis 
    
    printf("Informe seu peso: ");
    scanf("%f", &peso);
    
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    imc = peso/(altura*altura);
    
    if(imc < 18.5) {
        
        printf("Você está abaixo do peso.");
    } else {
        
        if(imc < 25) {
            
            printf("Você está no peso ideal.");
            
        } else {
            
            if(imc < 30) {
                
                printf("Você está com Sobrepeso.");
                
            } else {
                
                if(imc < 35) {
                    
                    printf("Você está com Obesidade grau I.");
                    
                } else {
                    
                    if(imc < 40) {
                        
                        printf("Você está com Obesidade grau II.");
                        
                    } else {
                        
                        printf("Você está com Obesidade grau III.");
                        
                    }
                    
                }
                
            }
            
        }
    }

    return 0;
}

