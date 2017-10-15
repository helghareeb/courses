#!/usr/bin/python

x = 5.0

if x > 0.0:
    print 'Positive'
else:
    if x < 0.0:
        print 'Negative'
        x = -1.0 * x
    else:
        print 'Zero'
