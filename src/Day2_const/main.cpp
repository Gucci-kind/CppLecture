#include <iostream>

// 1. const int &red の場合
void testConstReference(const int &red) {
    // 以下の行はコンパイルエラーになる（redは参照先の値がconst）
    // red = 100;
    std::cout << "testConstReference: " << red << std::endl;
}

// 2. const int *ptr の場合
void testConstPointer(const int *ptr) {
    // 以下の行はコンパイルエラーになる（*ptrはconstなので変更不可）
    // *ptr = 200;
    
    // ただし、ポインタ変数ptr自体は変更可能なので、別のアドレスを代入することはOK
    int dummy = 999;
    ptr = &dummy; // これ自体は問題なし

    std::cout << "testConstPointer: " << *ptr << std::endl;
}

// 3. int *const ptr の場合
void testConstPointerObject(int *const ptr) {
    // ポインタ変数ptr自体はconstのため、再代入はできない
    // 以下の行はコンパイルエラーになる
    // ptr = nullptr;
    
    // しかし、ptrが指す先の値は変更可能
    *ptr = 300;
    
    std::cout << "testConstPointerObject: " << *ptr << std::endl;
}

int main() {
    int a = 10;
    testConstReference(a);   // 引数としてaを渡す
    
    int b = 20;
    testConstPointer(&b);      // bのアドレスを渡す
    
    int c = 30;
    testConstPointerObject(&c); // cのアドレスを渡す
    
    std::cout << "After testConstPointerObject, c = " << c << std::endl;
    return 0;
}