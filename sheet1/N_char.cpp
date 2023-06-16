#include <iostream>
#include <string>

using namespace std;

int main() {
    char X;
    cin >> X;
    if ('a' <= X || X >= 'z') {
        X-= 32;
    } else {
        X+= 32;
    }
    cout << X << endl;
    return 0;
}