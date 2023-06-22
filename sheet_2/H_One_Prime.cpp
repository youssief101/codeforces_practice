#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;
    if (X > 1) {
        for (int i{2}; (i * i <= X) && (X > 1); ++i) {
            if (X % i == 0) {
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
