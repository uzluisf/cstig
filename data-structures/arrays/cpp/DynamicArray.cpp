#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    m_capacity = INITIAL_CAPACITY;
    m_size = 0;
    m_array = new int[m_capacity];
}

DynamicArray::~DynamicArray() {
    delete [] m_array;
}

int DynamicArray::size() const { return m_size; }

bool DynamicArray::isEmpty() const { return size() == 0; }

int DynamicArray::indexOf(const int item) const {
    for (int i = 0; i < m_size; i++) {
        if (m_array[i] == item) return i;
    }
    return -1;
}

bool DynamicArray::contains(const int item) const {
    return indexOf(item) != -1;
}

int DynamicArray::get(const int index) {
    assert(0 <= index && index < m_size);
    return m_array[index];
}

void DynamicArray::add(const int item) {
    // resize if size is at least capacity.
    if (m_size >= m_capacity) {
        m_capacity *= GROWTH_FACTOR;
        int *temp = new int[m_capacity];
        std::copy(m_array, m_array + m_size, temp);
        delete [] m_array;
        m_array = temp;
    }

    m_array[m_size++] = item;
}

int DynamicArray::removeAt(const int index) {
    assert(0 <= index && index < m_size);
    int item = m_array[index];
    m_size--;
    for (int i = index; i < m_size; i++) {
        m_array[i] = m_array[i + 1];
    }
    return item;
}

bool DynamicArray::remove(int item) {
    for (int i = 0; i < m_size; i++) {
        if (m_array[i] == item) {
            this->removeAt(i);
            return true;
        }
    }
    return false;
}

void DynamicArray::pretty_print() const {
    std::cout << "[";

    for (int i = 0; i < m_size; i++) {
        if (i == m_size - 1) {
            std::cout << m_array[i];
        }
        else {
            std::cout << m_array[i] << ", ";
        }
    }

    std::cout << "]\n";
}
