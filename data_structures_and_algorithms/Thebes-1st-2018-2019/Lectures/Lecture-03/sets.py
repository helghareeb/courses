# بسم الله الرحمن الرحيم


# number_set = set()

# number_set.add(1)
# number_set.add(1)
# number_set.add(1)
# number_set.add(1)
# number_set.add(1)
# number_set.add(1)

# # for val in number_set:
# #     print('Value is: {}'.format(val))

# print('Length of List is: {}'.format(len(number_set)))
# number_set.remove(1)
# print('Length of List is: {}'.format(len(number_set)))
# number_set.remove(1)

set_a = set()
set_b = set()
for i in range(21):
    set_a.add(i)

for i in range(10,31):
    set_b.add(i)

print(set_a)
print(set_b)

# print(set_a.union(set_b))
print(set_a | set_b)

# print(set_a.intersection(set_b))
print(set_a & set_b)

# print(set_a.difference(set_b))
print(set_a - set_b)

# print(set_a.symmetric_difference(set_b))
print(set_a ^ set_b)

# print('Set A:')
# for item in set_a:
#     print(item)
# print('='*60)

# print('Set B:')
# for item in set_b:
#     print(item)
# print('='*60)
