#include <iostream>
#include <string>

struct ScoreBoard {
private:
    std::string name;
    int japanese;
    int math;
    int english;

public:
    double average;
    ScoreBoard(std::string user_name, int japanese_score, int math_score, int english_score)
        :name(user_name), japanese(japanese_score), math(math_score), english(english_score), average((japanese_score + math_score + english_score) / 3.0) {
            
        }
    
    void Print() {
        std::cout << name << "\n";
        std::cout << japanese << "\t";
        std::cout << math << "\t";
        std::cout << english << "\n";
        std::cout << "ave = " << average << "\n";
    }
};

int main() {
    ScoreBoard board = ScoreBoard("Tatsuya", 35, 100, 89);
    //std::cout << board.name << "\n";
    std::cout << board.average << "\n";
    board.Print();
}