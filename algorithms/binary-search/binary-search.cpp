#include <iostream>
#include <vector>

int binarySearch(std::vector<int> arr, int needle) {
    int lo = 0;
    int hi = arr.size() - 1;

    while (lo <= hi) {
        int m = (lo + hi)/2;
        // needle's possibly to the left of arr[m]
        if (arr[m] > needle) {
            hi = m - 1;
        }
        // needle's possibly to the right of arr[m]
        else if (arr[m] < needle) {
            lo = m + 1;
        }
        // needle found!
        else {
            return m;
        }
    }

    // needle not found!
    return -1;
}

int main() {
    std::vector<int> arr {11,12, 13, 14, 15, 16};
    
    int needle = 11;
    int pos = binarySearch(arr, needle);
    if (pos != -1) {
        std::cout << needle << " found at position " << pos << ".\n"; 
    }
    else {
        std::cout << needle << " not found.\n";
    }

    needle = 20;
    pos = binarySearch(arr, needle);
    if (pos != -1) {
        std::cout << needle << " found at position " << pos << ".\n"; 
    }
    else {
        std::cout << needle << " not found.\n";
    }
}
