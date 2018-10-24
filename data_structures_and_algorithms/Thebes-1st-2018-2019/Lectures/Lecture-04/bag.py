# بسم الله الرحمن الرحيم 


class Bag:
    def __init__(self):
        self._list = []
        self.current = 0

    def length(self):
        return len(self._list)

    def contains(self, item):
        if item in self._list:
            return True
        else:
            return False

    def add(self, item):
        self._list.append(item)

    def remove(self, item)    :
        self._list.remove(item)

    def __iter__(self):
        return self

    def __next__(self):
        if self.current > len(self._list):
            raise StopIteration
        else:
            self.current += 1
            return self._list[self.current]
        
