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
    
    if (bmi < 18.5) {
        std::cout << "瘦せすぎです \n";
    }
    else if (bmi < 25) {
        std::cout << "普通です \n";
    } 
    else {
        std::cout << "肥満です \n";
    }
    return 0;
}