# Pedir datos
n1 = int(input("Introduce el primer numero: "))
n2 = int(input("Introduce el segundo numero: "))

# Realizar operaciones
rs = n1 + n2
rr = n1 - n2
rm = n1 * n2

# Mostrar resultados
print("Resultado de la suma:", rs)
print("Resultado de la resta:", rr)
print("Resultado de la multiplicacion:", rm)

# Division
if n2 != 0:
    rd = n1 / n2
    print("Resultado de la division:", rd)
else:
    print("No es posible dividir entre 0.")
