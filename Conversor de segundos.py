# Codigo conversor de segundos.

segs=input(" Entre com o número de segundos que deseja converter:")
T_segs=int(segs)
dias=T_segs//86400
d_resto=T_segs%86400
h=d_resto//3600
s_resto=T_segs%3600
min=s_resto//60
s_def=s_resto%60

print(dias,"dias,",h,"horas,",min,"minutos e",s_def,"segundos.")
