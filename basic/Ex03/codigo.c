/*As vendas parceladas se
tornaram uma ótima opção para os lojistas que,
a cada dia, criam novas promoções para tentar
conquistar novos clientes. Faça um algoritmo
que permita ao lojista informar o preço do
produto e receber as seguintes informações:
a) O valor com 10% de desconto para
pagamento à vista;
b) O valor da prestação para parcelamento
sem juros, em 5x;
c) O valor da prestação para parcelamento
com juros, em 10x, com 20% de acréscimo
no valor do produto.*/

#include <stdio.h>

int main()
{

 float valor, valor10, parcelado5, parcelado10;
 
 printf("Informe o valor do produto: ");
 scanf("%f", &valor);
 
 valor10 =  valor - (valor*0.10);
 
 parcelado5 = valor/5;
 
 parcelado10 = (valor+(valor*0.20))/10;
 printf("O valor com desconto de 10% por pagamento a vista fica R$ %.2f", valor10);
 printf("\nO valor da parcela dividido em 5x e de R$ %.2f", parcelado5);
 printf("\nO valor da parcela dividido em 10x com juros e de R$ %.2f", parcelado10);
  }


