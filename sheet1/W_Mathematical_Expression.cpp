#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    char S, Q;
    cin >> A >> S >> B >> Q >> C;
    // addition
    if (S == '+' && Q == '=') {
        if (A + B == C)
            cout << "Yes" << endl;
        else
            cout << A + B << endl;
    } else if (S == '-' && Q == '=') {
        if (A - B == C)
           cout << "Yes" << endl;
        else
            cout << A - B << endl;
    } else if (S == '*' && Q == '=') {
        if (A * B == C)
            cout << "Yes" << endl;
        else
            cout << A * B << endl;
    }
    return 0;
}