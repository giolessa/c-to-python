/******************************************************************************

6. Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.
*******************************************************************************/

#include <stdio.h>

int main() {
    int i, a, b, c, maior, menor, meio;

    printf("Informe o valor de i(de 1 a 3): ");
    scanf("%d", &i);

    printf("Digite o valor 1: ");
    scanf("%d", &a);
    printf("Digite o valor 2: ");
    scanf("%d", &b);
    printf("Digite o valor 3: ");
    scanf("%d", &c);

    switch(i) {
        case 1: 
            if(a <= b && a <= c) {
                menor = a;
                if(b <= c) { 
                    meio = b; maior = c; }
                else { 
                    meio = c; maior = b; }
            } else {
                if(b <= a && b <= c) {
                    menor = b;
                    if(a <= c) { 
                        meio = a; maior = c; }
                    else { 
                        meio = c; maior = a; }
                } else {
                    menor = c;
                    if(a <= b) { 
                        meio = a; maior = b; }
                    else { 
                        meio = b; maior = a; }
                }
            }
            printf("Ordem crescente: %d %d %d\n", menor, meio, maior);
            break;

        case 2: 
            if(a >= b && a >= c) {
                maior = a;
                if(b >= c) { 
                    meio = b; menor = c; }
                else { 
                    meio = c; menor = b; }
            } else {
                if(b >= a && b >= c) {
                    maior = b;
                    if(a >= c) { 
                        meio = a; menor = c; }
                    else { 
                        meio = c; menor = a; }
                } else {
                    maior = c;
                    if(a >= b) { 
                        meio = a; menor = b; }
                    else { 
                        meio = b; menor = a; }
                }
            }
            printf("Ordem decrescente: %d %d %d\n", maior, meio, menor);
            break;

        case 3: 
            if(a >= b && a >= c) {
                maior = a;
                if(b <= c) { 
                    menor = b; meio = c; }
                else {
                    menor = c; meio = b; }
            } else {
                if(b >= a && b >= c) {
                    maior = b;
                    if(a <= c) { 
                        menor = a; meio = c; }
                    else { 
                        menor = c; meio = a; }
                } else {
                    maior = c;
                    if(a <= b) { 
                        menor = a; meio = b; }
                    else { 
                        menor = b; meio = a; }
                }
            }
            printf("Maior no meio: %d %d %d\n", menor, maior, meio);
            break;
    }

    return 0;
}


