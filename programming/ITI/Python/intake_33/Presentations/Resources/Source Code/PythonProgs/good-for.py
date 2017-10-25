#!/usr/bin/python

primes = [2, 3, 5, 7, 11, 13, 17, 19]

# A well written for loop: it deletes the loop variable
#  immediately after the loop finishes thus preventing
#  accidental referencing of the loop variable later
#  in the script.
for prime in primes:
    print prime
del prime

print 'Done'
