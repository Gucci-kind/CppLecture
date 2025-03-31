#include <iostream>
int main(){
    int num = 2;
    std::cout << 1 / num << "\n";
    std::cout << 1 / (double)num << "\n";
    std::cout << 1 / static_cast<double>(num) << "\n";
    return 0;
}