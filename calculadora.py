#calculadora simple usando "operadores"

operador = input("Ingrese un operador(+ - / *)")

num1 = float(input("Ingrese el primer valor"))
num2 = float(input("Ingrese el segundo valor"))

if operador == '+':
    result = num1 + num2
    print(round(result, 3))
elif operador == '-':
    result = num1 - num2
    print(round(result, 3))
elif operador == '/':
    result = num1 / num2
    print(round(result, 3))
elif operador == '*':
    result = num1 * num2
    print(round(result, 3))
else:
    print(f"{operador} no es un operador valido")
