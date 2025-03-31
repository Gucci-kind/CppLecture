#include <iostream>
#include <array>

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int array[5] = {5, 3, 90, 5, 12};

    

    for (int j =0; j < 4; ++j) {
        for (int i = 0; i < 4; ++i) {
            if ( array[i] > array[i+1]) {
                std::swap(array[i] , array[i+1]);
            }            
        }
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << "\n";
    }
}