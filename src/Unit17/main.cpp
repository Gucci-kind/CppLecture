#include <iostream>

int main() {
    int x = 3, y = 5;
    int *ptr = &x;
    
    //1
    std::cout << "xの値は" << x << ", アドレスは" << &x << "\n";
    std::cout << "yの値は" << y << ", アドレスは" << &y << "\n";
    std::cout << "ptrの値は" << *ptr << ", アドレスは" << ptr << "\n";
    
    //2
    ptr = &y;
    std::cout << "xの値は" << x << ", アドレスは" << &x << "\n";
    std::cout << "yの値は" << y << ", アドレスは" << &y << "\n";
    std::cout << "ptrの値は" << *ptr << ", アドレスは" << ptr << "\n";

    //3
    *ptr = 8;
    std::cout << "xの値は" << x << ", アドレスは" << &x << "\n";
    std::cout << "yの値は" << y << ", アドレスは" << &y << "\n";
    std::cout << "ptrの値は" << *ptr << ", アドレスは" << ptr << "\n";
}