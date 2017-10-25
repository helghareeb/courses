#!/usr/bin/python

import utils

def poly(x):
    return x**2 - 2.0

print utils.find_root(poly, 0.0, 2.0, 1.0e-5)
