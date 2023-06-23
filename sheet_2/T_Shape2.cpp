#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int lspace = N;
    for (int i = 1; i <= N; ++i) {
        for (int k = 1; k < lspace; ++k) {
                cout << " ";
            }
        lspace--;
        for (int j = 1; j < i * 2; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}