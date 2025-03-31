#include <iostream>
int main(){
    double height, weight;
    double bmi;
    
    std::cout << "身長を入力してください \n";
    std::cin >> height;
    height /= 100;
    std::cout << "体重を入力してください";
    std::cin >> weight;
    
    bmi =weight / (height*height);
    std::cout << "bmiは" << bmi << "です \n";
    
    return 0;
}