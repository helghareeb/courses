# بسم الله الرحمن الرحيم


from bag import Bag

my_bag = Bag()
my_bag.add(19)
my_bag.add(74)
my_bag.add(23)
my_bag.add(19)
my_bag.add(12)
my_bag.add(19)

value = int(input("Guess a value contained in the Bag: "))
if value in my_bag:
    print("The bag contains the value {}".format(value))
else:
    print("The bag does not contain the value {}".format(value))