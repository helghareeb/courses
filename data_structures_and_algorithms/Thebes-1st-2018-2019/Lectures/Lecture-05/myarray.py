# بسم الله الرحمن الرحيم

import ctypes

class Array:
    def __init__(self, size):
        assert size > 0, "Array size must be larger than 0"
        self._size = size
        self._iter = -1

        PyArrayType = ctypes.py_object * size
        self._elements = PyArrayType()

        self.clear (None)

    def __len__(self):
        return self._size

    def clear(self, value):
        for i in range(self._size):
            self._elements[i] = value

    def __iter__(self):
        return self

    def __next__(self):
        if self._iter >= len(self._elements):
            raise StopIteration
        else:
            self._iter += 1
            return self._elements[self._iter]

    def __getitem__(self, index):
        assert index >= 0 and index <= len(self), "Array subscript out of range"
        return self._elements[index]

    def __setitem__(self, index, value):
        assert index >= 0 and index <= len(self), "Array subscript out of range"
        self._elements[index] = value

class Array2D:
    def __init__(self, numRows, numCols):
        self._theRows = Array(numRows)
        for i in range(numRows):
            self._theRows[i] = Array(numCols)

    def numRows(self):
        return len(self._theRows)

    def numCols(self):
        return len(self._theRows[0])

    def clear(self, value):
        for row in range(self.numRows()):
            row.clear(value)


    def __getitem__(self, ndxTuple):
        assert len(ndxTuple) == 2, "Invalid number of array subscripts"
        row = ndxTuple[0]
        col = ndxTuple[1]
        assert row >=0 and row < self.numRows() and \
        col >= 0 and col < self.numCols(), \
        "Array subscript out of range"
        the1dArray = self._theRows[row]
        return the1dArray[col]

    def __setitem__(self, ndxTuple, value):
        assert len(ndxTuple) == 2, "Invalid number of array subscripts"
        row = ndxTuple[0]
        col = ndxTuple[1]
        assert row >=0 and row < self.numRows() and \
        col >= 0 and col < self.numCols(), \
        "Error Here"
        the1dArray = self._theRows[row]
        the1dArray[col] = value