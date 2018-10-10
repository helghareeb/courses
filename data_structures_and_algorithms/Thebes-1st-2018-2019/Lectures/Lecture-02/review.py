from mymath import is_odd

x = int(input('Enter a Number: '))

if is_odd(x):
    print('You entered Number {} and it is Odd'.format(x))
else:
    print('You entered Number {} and it is Even'.format(x))