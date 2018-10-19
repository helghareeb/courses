# بسم الله الرحمن الرحيم

class MyQueue:
    def __init__(self):
        self.__a_list = []

    def enqueue(self, item):
        self.__a_list.append(item)

    def dequeue(self):
        return self.__a_list.pop(0)