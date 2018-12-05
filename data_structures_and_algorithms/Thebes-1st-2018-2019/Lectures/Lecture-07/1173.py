# بسم الله الرحمن الرحيم

x = [None] * 10

x[0] = int(input())

for i in range(1,10):
    x[i] = x[i-1] * 2
    
for i in range(10):
    print('N[{}] = {}'.format(i,x[i])) 