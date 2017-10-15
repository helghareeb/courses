#!/usr/bin/python

# This script reads in some
#  numbers from the file 'numbers.txt'.
# It then prints out the smallest
#  number, the arithmetic mean of
#  the numbers, and the largest
#  number.

import utils

data = open('numbers.txt')

numbers = []

for line in data:
	numbers.append(float(line))
del line

data.close()
del data

print utils.stats(numbers)
