#!/usr/bin/python

# This is a list of some metallic 
#  elements.
metals = [ 'silver', 
           'gold', 
           'iron', 
           'zinc', 
           'aluminium', 
           'copper', 
           'magnesium', 
           'lead' ]

# Make a new list that is almost 
#  identical to the metals list: the new
#  contains the same items, in the same
#  order, except that it does *NOT* 
#  contain the item 'copper'.

bad_metal = 'copper'

bad_index = metals.index(bad_metal)
new_metals1 = metals[:bad_index] + metals[bad_index+1:]

new_metals2 = metals[:]
new_metals2.remove(bad_metal)

new_metals3 = []
for metal in metals:
    if metal != bad_metal:
       new_metals3.append(metal)

# Print the new list.
print new_metals1
print new_metals2
print new_metals3
