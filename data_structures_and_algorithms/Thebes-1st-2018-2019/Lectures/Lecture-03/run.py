# # بسم الله الرحمن الرحيم


# from myStack import MyStack
from myQueue import MyQueue

test_my_queue = MyQueue()
test_my_queue.enqueue(1)
test_my_queue.enqueue(2)
test_my_queue.enqueue(3)
test_my_queue.enqueue(4)

print(test_my_queue.dequeue())
print(test_my_queue.dequeue())

# test_my_stack = MyStack()
# test_my_stack.push('fb')
# test_my_stack.push('twitter')
# test_my_stack.push('instagram')

# print(test_my_stack.pop())

# test_my_stack.push('iti.gov.eg')

# from Student import Student

# std_01 = Student(1, 'Ahmed Ashraf')
# std_02 = Student(2, 'Youssab')
# std_03 = Student(3, 'Sameh')

# print(std_01.id)
# print(std_01.name)
# std_01.attend_lecture()