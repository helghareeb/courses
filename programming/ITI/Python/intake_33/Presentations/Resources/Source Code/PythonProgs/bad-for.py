#!/usr/bin/python

primes = [2, 3, 5, 7, 11, 13, 17, 19]

for prime in primes:
    print prime

print 'Done'

# Using the loop variable outside of the loop is legal in Python,
#  BUT THIS IS A VERY BAD IDEA - DON'T DO IT!
print prime
