"""
*Utilizei funções exclusivamente para treinar*

Elabore um algorítimo que, dados o peso e a altura de um adulto, 
   determine a sua condição de acordo com a tabela abaixo:

   IMC < 18.5                   Abaixo do peso
   18.5 <= IMC < 25             Peso Ideal
   25 <= IMC < 30               Sobrepeso
   30 <= IMC < 35               Obesidade grau I
   35 <= IMC < 40               Obesidade grau II
   IMC >= 40                    Obesidade grau III

"""
def descobrir_imc(altura, peso):

    return peso/(altura*altura)

def main():

    altura_usuario = float(input("Informe sua altura: "))
    peso_usuario = float(input("Informe seu peso: "))

    imc = descobrir_imc(altura_usuario, peso_usuario)

    if(imc < 18.5):
    
        print("Você está abaixo do peso.")
    elif(imc < 25):
        print("Você está no peso ideal.")
    elif(imc < 30):
        print("Você está com sobrepeso.")
    elif(imc < 35):
        print("Você está com obesidade grau I.")
    elif(imc < 40):
        print("Você está com obesidade grau II.")
    else: 
        print("Você está com obesidade grau III.")

if __name__ == "__main__":
    main()
