#!/usr/bin/python

# Start with two non-negative numbers which are definitely larger
# and smaller than machine epsilon.  These define an interval which
# contains machine epsilon.  We repeatedly calculate the mid-point
# between them and determine if it is larger or smaller than machine
# epsilon and change the bounds of the interval accordingly.  We keep
# going until the interval is short enough.

# In this case, "short enough" means the smallest interval such that
# when we display the bounds using print we actually see a difference
# on the screen.  On the PCs used for this course, this works out as an
# interval of size ~1.0e-27.  If the interval is any smaller then when
# print displays the bounds on the screen they will appear to be the same.
# (Recall that print does not necessarily display all the significant
# figures of a floating point number.)  Note that on other computers we
# may need to use a larger or smaller interval as machine epsilon is
# *machine specific*.

too_large = 1.0
too_small = 0.0
tolerance = 1.0e-27

while too_large - too_small > tolerance:

    mid_point = (too_large + too_small) / 2.0

    if 1.0 + mid_point > 1.0:
        too_large = mid_point
    else:
        too_small = mid_point

print too_small, '< epsilon <', too_large
