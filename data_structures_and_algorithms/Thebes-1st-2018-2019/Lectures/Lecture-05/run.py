# بسم الله الرحمن الرحيم

## Array ADT
# Array(size)
# length()
# getitem(index)
# setitem(index, value)
# clear(value)
# iterator()

from myarray import Array
import random

valueList = Array(100)

for i in range(100):
    valueList[i] = random.random()

# valueList[0] = 0
# valueList[1] = 1
# valueList[2] = 2

for value in valueList:
    print(value)

