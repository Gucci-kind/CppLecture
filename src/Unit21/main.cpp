#include <iostream>

int main() {
    int numerator, denominator;
    std::cout << "数字を入力してください\n";
    std::cout << "分子 > ";
    std::cin >> numerator;
    std::cout << "分母 > ";
    std::cin >> denominator;

    double result;
    result = static_cast<double>(numerator) / denominator;
    std::cout << result << "\n";
}