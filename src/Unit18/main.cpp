#include <iostream>
#include <array>

constexpr int ArraySize = 3;

int main() {
    std::array<int, ArraySize> arr = {2, 3, 5};

    int *ptr = &arr[0];
    std::cout << ptr[0] << "\n";
    std::cout << ptr[1] << "\n";
    std::cout << *ptr << "\n";
    std::cout << *(ptr + 1) << "\n";
}