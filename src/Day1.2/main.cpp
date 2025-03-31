#include <iostream>

int main(){
    double interest;
    std::cout << "年利[%]を入力してください";
    std::cin >> interest;

    double principal = 1.0;
    double years = 0;

    for (; principal < 2.0; years++) {
        principal = principal*(1.0 + interest/100);
    }

    std::cout << "元本が2倍以上になるのは" << years << "年後です \n";

    return 0;
}