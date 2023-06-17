#include <iostream>

int main() {
    int N;
    std::cin >> N;
    if ((N % 10) == 0 || (((N - (N % 10)) / 10) % (N % 10) == 0 || (N % 10) % ((N - (N % 10)) / 10) == 0))
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}