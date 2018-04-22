#Codigo que calcula equações de segundo grau em python.

a=float(input("Digite aqui o valor de a"))
b=float(input("Digite aqui o valorde b"))
c=float(input("Digite aqui o valor de c"))

import math

D=b**2-4*a*c



if D>0:
    x_1=(-b+math.sqrt(D))/(2*a)
    x_2=(-b-math.sqrt(D))/(2*a)
    print("Primeira raiz:",x_1)
    print("Segunda raiz:",X_2)

if D==0:
    x_1=(-b+math.sqrt(D))/(2*a)
    print("As duas raízes são iguais","a raiz é:",x_1) 
    
   
    

else:
   print("A equação não tem raízes reais") 
    
    
