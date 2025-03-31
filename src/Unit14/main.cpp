#include <iostream>

int max(int num1, int num2){
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int x = 5, y = 2, z = 7;
    std::cout << max(max(x,y),z) << "\n";
    system("PAUSE");
}