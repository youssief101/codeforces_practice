#include <iostream>
using namespace std;

void printSymbol(char symbol, int n2) {
    for (int i{0}; i < n2; ++i) {
        cout << symbol;
    }
    cout << endl;
}

int main() {
    char symbol;
    int n1, n2;
    cin >> symbol >> n1;
    for (int i{0}; i < n1; ++i) {
        cin >> n2;
        printSymbol(symbol, n2);
    }
    return 0;
}