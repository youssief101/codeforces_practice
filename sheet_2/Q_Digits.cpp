#include <iostream>
using namespace std;

int main() {
    int N1; long long int N2;
    cin >> N1;
    for (int i{0}; i < N1; ++i) {
        cin >> N2;
        if (N2 == 0) {
            cout << "0" << endl;
        }
        else {
            while (N2 > 0) {
                int digit = N2 % 10;
                cout << digit << " ";
                N2 /= 10;
            }
            cout << endl;
        }
    }
    return 0;
}