# بسم الله الرحمن الرحيم

class MyStack:
    def __init__(self):
        self.__a_list = []

    def push(self, item):
        self.__a_list.append(item)

    def pop(self):
        return self.__a_list.pop()