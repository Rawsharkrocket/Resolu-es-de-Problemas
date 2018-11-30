# Codigo para a detecção de digitos adjacentes.

n_orig=n=int(input("Digite um numero:"))
d_a=n%10
adjacentes=False
seg=0
while n>0 and not adjacentes:
    atual=n%10
    if atual==d_a:
        adjacentes=True
    else:
        seg=seg+1
        d_a=atual
        n=n//10

if adjacentes:
    print("sim")

else:
    print("não")
            
    
