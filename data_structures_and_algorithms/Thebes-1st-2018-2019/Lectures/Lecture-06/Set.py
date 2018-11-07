# بسم الله الرحمن الرحيم



class Set:
    def __init__(self):
        self._list = []
        self._counter = -1

    def __len__(self):
        return len(self._list)

    def length(self):
        return len(self._list)

    def contains(self, element):
        return element in self._list

    def add(self, element):
        if element not in self._list: self._list.append(element)

    def remove(self, element):
        self._list.remove(element)

    def equals(self, set_b):
        return self._list == set_b._list

    def __eq__(self, set_b):
        return self._list == set_b._list

    def is_subset_of(self, set_b):
        for e in self._list:
            if e not in set_b._list:
                return False
        return True

    def union(self, set_b):
        return self._list.extend(set_b._list)

    def intersect(self, set_b):
        inters = Set()
        for e in self._list:
            if e in set_b._list:
                inters.add(e)
        # if inters.length() > 0:
        if len(inters) > 0:
            return inters
        else:
            return Set()

    def difference(self, set_b):
        diff = Set()
        for e in self._list:
            if e not in set_b._list:
                diff.add(e)
        if len(diff) > 0:
            return diff
        else:
            return Set()

    def __iter__(self):
        return self

    def __next__(self):
        self._counter += 1
        if self._counter > len(self._list):
            raise StopIteration
        else:
            return self._list[self._counter]