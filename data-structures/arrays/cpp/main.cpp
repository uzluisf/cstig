#include "DynamicArray.h"

int main() {
    DynamicArray a = DynamicArray();

    std::cout << "Size: " << a.size() << std::endl;
    a.pretty_print();

    for (int i = 0; i < 5; i++) {
        a.add(i * i);
    }

    std::cout << "Size: " << a.size() << std::endl;
    a.pretty_print();

    for (int i = 6; i < 10; i++) {
        a.add(i * i);
    }

    std::cout << "Size: " << a.size() << std::endl;
    a.pretty_print();

    std::cout << "Item: " << a.get(5) << "\n";
    int elem = a.removeAt(5);

    std::cout << "Item: " << elem << "\n";
    std::cout << "Size: " << a.size() << std::endl;

    if (a.remove(16)) {
        std::cout << "removed\n";
    }
    else {
        std::cout << "couldn't removed\n";
    }

    std::cout << "Size: " << a.size() << std::endl;

    // a.pretty_print();
}

