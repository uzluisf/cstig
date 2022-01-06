#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

#include <ostream>
#include <iostream>
#include <cassert>

const int INITIAL_CAPACITY = 5;
const int GROWTH_FACTOR = 2;

class DynamicArray {
    public:
        DynamicArray();
        ~DynamicArray();

        int size() const;
        bool isEmpty() const;
        int indexOf(const int item) const;
        bool contains(const int item) const;
        int get(const int index);

        void add(const int item);
        int removeAt(const int item);
        
        bool remove(const int item);

        void pretty_print() const;

    private:
        int *m_array;
        int m_size = 0;                    // number of items currently in the array
        int m_capacity = INITIAL_CAPACITY; // number of total slots in the array
};

#endif
