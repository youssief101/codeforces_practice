#include <iostream>

int main() {
    int n, k, a;
    std::cin >> n >> k >> a;

    if ((long long)n * k % a != 0)
        std::cout << "double" << std::endl;
    else if ((long long)n * k / a > __INT_MAX__)
        std::cout << "long long" << std::endl;
    else
        std::cout << "int" << std::endl;
    return 0;
}