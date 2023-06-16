#include <iostream>
#include <string>

using namespace std;

int main() {
    char X;
    cin >> X;
    if ((65 <= X && X <= 90) || (97 <= X && X <= 122)) {
        cout << "ALPHA" << endl;
        if (65 <= X && X <= 90) {
            cout << "IS CAPITAL" << endl;
        } else {
            cout << "IS SMALL" << endl;
        }
    } else if(48 <= X && X <= 57) {
        cout << "IS DIGIT" << endl;
    }
}