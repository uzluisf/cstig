#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr) {
    for (int j = 1; j < arr.size(); j++) {
        int key = arr[j];
        int i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i -= 1;
        }
        arr[i+1] = key;
    }
}

void print(std::vector<int> &arr) {
    std::cout << "(";
    for (int i = 0; i < arr.size(); i++) {
        if (i == arr.size() - 1) {
            std::cout << arr[i];
        }
        else {
            std::cout << arr[i] << ",";
        }
    }
    std::cout << ")\n";
}

int main() {
    std::vector<int> arr {2, 3, 1, 5, 4};

    print(arr);
    insertionSort(arr);
    print(arr);

    return 0;
}

