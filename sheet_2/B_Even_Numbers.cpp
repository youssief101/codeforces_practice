#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N > 1) {
        for (int i{1}; i <= N; ++i) {
            if (i % 2 == 0) {
                cout << i << endl;
            }
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}
