"""
 Escrever um algoritmo que,
dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida
por i, como descrito abaixo:
a) i = 1: os três valores em ordem crescente;
b) i = 2: os três valores em ordem decrescente;
c) i = 3: o maior valor deve ser apresentado no
meio dos outros.

"""

def ordernar(a, b, c, i):
    
    crescente = sorted([a, b, c])
    decrescente = sorted([a, b, c], reverse=True)

    valores = [a, b, c]
    maior = max(valores)
    valores.remove2(maior)
    meio_no_meio = [valores[0], maior, valores[1]]

    match i:
        case 1:
            return crescente
        case 2:
            return decrescente
        case 3:
            return meio_no_meio
        case _:
            return None
        
def main():
    n1 = int(input("Informe o primeiro valor: "))
    n2 = int(input("\nInforme o segundo valor: "))
    n3 = int(input("\nInforme o terceiro valor: "))

    ordem = int(input("\nInforme a ordem que você gostaria: \n 1 — Ordem crescente \n 2 — Ordem descresente \n 3 — Maior no meio \n"))
    
    ordenado = ordernar(n1, n2, n3, ordem)

    if ordenado is not None:
        print(f"Os valores ordenados são: {ordenado}")
    else:
        print("Opção inválida.")

main()

