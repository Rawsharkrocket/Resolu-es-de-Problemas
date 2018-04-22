# Codigo para a detecção de numeros primos em python.

n=int(input("digite um numero:"))
primo=True
d=2

while 2<n and primo:
    if n%d==0:
       primo=False 

    d=d+1

if primo and n!=1:
    print("primo")

else:
    print("não primo")

