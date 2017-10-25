#!/usr/bin/python

# This is a list of some data values.
data = [ 5.75, 8.25, 2.625, 5.50, 0.125, -12.875, 56.50, -32.125, -0.96875, 
         -5.875, 8.75, 53.9375, 192.125 ]

# Make two new lists from this list.
#   The first new list should contain
#   the first half of data, in the same
#   order, whilst the second list should
#   contain the second half, so:
#	data = first_half + second_half
#   If there are an odd number of items,
#   make the first new list the larger
#   list.

if len(data) % 2 == 0:
	index = len(data) / 2
else:
	index = (len(data) + 1) / 2

first_half = data[:index]
second_half = data[index:]

# Print the new lists.
print first_half
print second_half
