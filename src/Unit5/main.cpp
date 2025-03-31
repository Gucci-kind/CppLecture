#include <iostream>
int main(){
    int num;
    std::cout << "2から1000までの数字を入力してください \n";
    std::cin >> num;

    bool isPrime = true;
    if (num < 2 || num >1000){
        std::cout << "有効範囲外です \n";
    }
    else{
        for (int i = 2; i <num; i++){
            if (num % i == 0){
                isPrime = false;
            }
        }
        if (isPrime) {
            std::cout << "素数です \n";
        }
        else{
            std::cout << "素数ではありません \n";
        }
    }
    return 0;
}