#include <iostream>
#include <string>
int main(){
    int num;
    num = 3;
    std::cout << 2*num << "\n";
    num = num + 5; // num += 5でも可
    std::cout << num << "\n";
    std::string words = "Hello World";
    std::cout << words << "\n";

    int num2 =2;
    std::cout << "num2 = " << num2 << "\n";
    printf("num2 = %d \n", num2);
    double x = 2.6;
    std::cout << "x = " << x << "\n";
    printf("x = %lf \n", x);
    std::string words2 = "Hello World";
    std::cout << "words2 = " << words2 << "\n";
    printf("words2 = %s \n", words2.c_str());
    return 0;
}