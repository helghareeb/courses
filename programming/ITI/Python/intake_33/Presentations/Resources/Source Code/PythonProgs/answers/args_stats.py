#!/usr/bin/python

# This script takes some numbers as
#  arguments on the command line.
# It then prints out the smallest
#  number, the arithmetic mean of
#  the numbers, and the largest
#  number.

import sys
import utils

numbers=[]
for arg in sys.argv[1:]:
	numbers.append(float(arg))
del arg

print utils.stats(numbers)
