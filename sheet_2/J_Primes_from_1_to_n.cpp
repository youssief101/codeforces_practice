#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i{2}; i <= N; ++i) {
        for (int k{2};(k * k <= i) && (i > 1); ++k) {
            if (i % k == 0)
                continue; 
        }
    }
    return 0;
}