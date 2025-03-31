#include <iostream>

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 3;
    int y = 5;

    swap(x, y);

    std::cout << "xの値は" << x << "\n";
    std::cout << "yの値は" << y << "\n";
}