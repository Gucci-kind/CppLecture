#include <iostream>
int main(){
    double scores[3];
    scores[0] = 1.4;
    scores[1] = 8.1;
    scores[2] = 3.5;
    for (int i = 0; i < 3; i++){
        std::cout << i << ">" << scores[i] << "\n";
    }
    return 0;
}