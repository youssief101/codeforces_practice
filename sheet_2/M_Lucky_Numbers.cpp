#include <iostream>
#include <vector>
using namespace std;

bool is_luckey(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 4 || digit == 7)
            num /= 10;
        else
            return 0;
    }
    return 1;
}

int main() {
    int A, B;
    vector<int> ivec;
    cin >> A >> B;
    for (int i{A}; i <= B; ++i) {
        if (is_luckey(i)) {
            ivec.push_back(i);
        }
    }
    if (!ivec.empty()) {
        for (auto d : ivec)
            cout << d << " ";
    } else
        cout << -1;
    cout << endl;
}