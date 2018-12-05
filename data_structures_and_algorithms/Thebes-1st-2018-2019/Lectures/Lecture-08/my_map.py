# بسم الله الرحمن الرحيم

class MyMap:
    
    def __init__(self):
        # self._inner_list = list()
        self._inner_list = []

    def length(self):
        return len(self)

    def __contains__(self, key):
        ndx = self._find_position(key)
        # Pythonic Way
        return ndx is not None

    def add(self, key, value):
        ndx = self._find_position(key)
        if ndx is not None:
            self._inner_list[ndx].value = value
            return False
        else:
            entry = _MapEntry(key, value)
            self._inner_list.append(entry)
            return True

    def remove(self, key)    :
        ndx = self._find_position(key)
        assert ndx is not None, "Invalid map key."
        self._inner_list.pop(ndx)

    def value_of(self, key):
        ndx = self._find_position(key)
        assert ndx is not None, "Invalid map key."
        return self._inner_list[ndx].value

    def __iter__(self):
        # return _map_iterator(self._inner_list)
        pass

    def __next__(self):
        # self._counter += 1
        # if self._counter >= len(self._list):
        #     raise StopIteration
        # else:
            # pass
        pass

    def __len__(self):
        return len(self._inner_list)

    def _find_position(self, key):
        for i in range(len(self)):
        # a = -1
        # for item in self._inner_list:
            # a += 1
            # if item.key == key:
            if self._inner_list[i].key == key:
                # return self._inner_list[]
                # return a
                return i
        return None

class _MapEntry:

    def __init__(self, key, value):
        self.key = key
        self.value = value