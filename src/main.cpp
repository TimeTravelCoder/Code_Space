#include <iostream>

// 递归函数计算斐波那契数列
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "请输入一个非负整数: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "请输入一个非负整数!" << std::endl;
        return 1;
    }

    std::cout << "斐波那契数列第 " << n << " 项是: " << fibonacci(n) << std::endl;
    return 0;
}