# بسم الله الرحمن الرحيم

# -*- coding: utf-8 -*-

a = []
for i in range(10):
    x = int(input())
    if x <= 0:
        a.append(1)
    else:
        a.append(int(x))
        
for i in range(10):
    print("X[{}] = {}".format(i,a[i]))