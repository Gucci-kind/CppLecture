#include <iostream>

int main() {
    int *num = new int[100];
    for (int i = 0; i < 100; ++i) {
        num[i] = i;
        std::cout << num[i] << ",";
    }
    std::cout << "\n";
    delete[] num;
}