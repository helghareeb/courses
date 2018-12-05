# -*- coding: utf-8 -*-

# بسم الله الرحمن الرحيم

line_no = int(input())

# operation_char = input()
operation_char = raw_input()

# inner_array = [None] * 12
# my_array = [inner_array] * 12

my_array = [ [ None for i in range(12) ] for j in range(12) ]

for x in range(12):
    for y in range(12):
        my_array[x][y] = int(input())

result = 0.0

if operation_char == 'S':
    for i in range(12):
        result += my_array[line_no][i]
elif operation_char == 'M':
    for i in range(12):
        result += my_array[line_no][i]
    result = result / 12

print(result)



