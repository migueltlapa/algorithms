import random
x=range(100);
random.shuffle(x);
f=open("c:\\algoritmos\\array.txt",'w')

f.write('int arr[] = {')

for numero in x:
    f.write(str(numero)+',')

f.write('};')
f.close()

