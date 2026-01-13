"""
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
"""

def consumo(percurso, Km_por_litro, valorCombustivel):

    consumoTotal = percurso/Km_por_litro

    custoTotal = consumoTotal*valorCombustivel

    return consumoTotal, custoTotal

def main():
    percursoFeito = float(input("Informe o percurso(em quilômetros) da viagem: "))
    kmPorLitro = float(input("Informe o número de quilômetros que o carro percorre com um litro(km/l): "))
    precoCombustivel = float(input("Informe o preço do litro do combustível: "))

    consumoTotal, custoTotal = consumo(percursoFeito, kmPorLitro, precoCombustivel)

    print(f"A quantidade total de combustível, em litros, consumida durante a viagem é: {consumoTotal:.2f}")
    print(f"O custo total de combustível é: {custoTotal:.2f}")

if __name__ == "__main__":
    main()
