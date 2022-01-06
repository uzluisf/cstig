class DynamicArray:
    """
    Generic implementation of a dynamic array.
    """

    def __init__(self, capacity=1):
        self._size = 0            # how many items in array
        self._capacity = capacity # number of total slots in array
        self._array = [None for _ in range(self._capacity)] 

    def isEmpty(self):
        return self._size == 0

    def indexOf(self, item):
        for i in range(self._size):
            if item == self._array[i]:
                return i
        return -1

    def add(self, item):
        if self._size >= self._capacity:
            if self._capacity == 0:
                self._capacity = 1
            else:
                self._capacity *= 2

            new_arr = DynamicArray(self._capacity)
            for i in range(self._size):
                new_arr[i] = self._array[i]
            self._array = new_arr

        self._array[self._size] = item
        self._size += 1

    def removeAt(self, index):
        if index < 0 or index >= self._size:
            raise IndexError

        item = self._array[index]

        self._size -= 1
        for i in range(index, self._self):
            self._array[i] = self._array[i+1]

        return item

    def remove(self, item):
        index = self.indexOf(item)
        if index == -1:
            return False
        else:
            self.removeAt(index)
            return True

    def __len__(self):
        return self._size

    def __contains__(self, item):
        return self.indexOf(item) != -1

    def __getitem__(self, index):
        return self._array[index]

    def __setitem__(self, index, item):
        self._array[index] = item

    def __str__(self):
        return "[" + ",".join([str(x) for x in self._array[0:self._size]]) + "]"

