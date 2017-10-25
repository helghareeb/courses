#!/usr/bin/python

# This is a list of numbers we want
#  to add up.
weights = [ 0.1, 0.5, 2.6, 7.0, 5.3 ]

# Add all the numbers in the list
#  together.

total = 0.0

for weight in weights:
	total = total + weight
del weight

# Print the result.
print total
