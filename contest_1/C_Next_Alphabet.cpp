#include <iostream>
using namespace std;

int main() {
    char C;
    cin >> C;
    cout << static_cast<char> ((C - 'a' + 1) % 26 + 'a') << endl;
}