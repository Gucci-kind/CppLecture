#include <iostream>
#include <array>

constexpr int RowSize = 9;
constexpr int ColumnSize = 9;

int main() {
    std::array<std::array<int, RowSize>, ColumnSize> mat;
    for (int i = 0; i < RowSize; ++i){
        for (int j = 0; j < ColumnSize; ++j){
            mat[i][j] = (i+1) * (j+1);
            std::cout << mat[i][j] << "\t";
        }
        std::cout << "\n";
    }

    
    return 0;
}
