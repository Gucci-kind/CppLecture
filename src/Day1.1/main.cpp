#include <iostream>

int main() {
    // 1 ≤ x, y ≤ 100 の範囲で探索
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            // 式: 12(x+4) - (2-7y) = 548
            if (12 * (x + 4) - (2 - 7 * y) == 548) {
                std::cout << "x = " << x << ", y = " << y << "\n";
            }
        }
    }
    return 0;
}