#include <iostream>

using namespace std;

int main() {
    long long int N, result{0};
    cin >> N;
    result = (N * (N + 1)) / 2;
    cout << result << endl;
    return 0;
}