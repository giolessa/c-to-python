def peso_no_planeta():
    print("===  PLANETAS  ===")
    print("\n1. Mercúrio - 0,37\n2. Vênus - 0,88\n3. Marte - 0,38\n4. Júpiter - 2,64\n5. Saturno - 1,15\n6. Urano - 1,17\n")

    planeta = int(input("Informe o número do planeta desejado: "))
    peso = float(input("Informe seu peso na Terra: "))

    match planeta:
        case 1:
            pesoPlaneta = (peso / 10) * 0.37
        case 2:
            pesoPlaneta = (peso / 10) * 0.88
        case 3:
            pesoPlaneta = (peso / 10) * 0.38
        case 4:
            pesoPlaneta = (peso / 10) * 2.64
        case 5:
            pesoPlaneta = (peso / 10) * 1.15
        case 6:
            pesoPlaneta = (peso / 10) * 1.17
        case _:
            print("Opção inválida.")
            return

    print(f"Seu peso no planeta desejado é: {pesoPlaneta:.2f}")



peso_no_planeta()
