#include <iostream>

int max(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    return num2;
}

int main() {
    int x = 5, y = 2, z = 7;
    std::cout << max(max(x,y),z) << "\n";
    system("pause");
}