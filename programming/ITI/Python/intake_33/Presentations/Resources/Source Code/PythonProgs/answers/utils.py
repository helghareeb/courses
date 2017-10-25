#!/usr/bin/python

"""A collection of my useful little functions."""

def reverse(a_to_b):
    b_to_a = {}
    for a in a_to_b:
        b = a_to_b[a]
        b_to_a[b] = a
    return b_to_a

def print_dict(dict):
    for item in dict:
        print item, dict[item]

def find_root(
	function,
	lower,
	upper,
	tolerance
	):
	"""find_root(function, lower, upper, tolerance)
finds a root within a given interval to within a
specified tolerance.  The function must take
values with opposite signs at the interval's ends."""
	while upper - lower > tolerance:
		middle = (lower + upper) / 2.0
		if function(middle)*function(upper) > 0.0:
			upper = middle
		else:
			lower = middle

	return (lower, upper)

def stats(numbers):

    min = numbers[0]
    max = numbers[0]
    total = 0

    for number in numbers:
        if number < min:
             min = number
        if number > max:
             max = number
        total = total + number

    return (min, total/(len(numbers)+0.0), max)
