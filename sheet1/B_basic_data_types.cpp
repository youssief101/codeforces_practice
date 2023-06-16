#include <iostream>
using std::cout; using std::endl; using std::cin;

int main() {
    int ival{0};
    long long int llival{0};
    char c;
    float fval{0};
    double dval{0};
    cin >> ival >> llival >> c >> fval >> dval;
    cout << ival << "\n"
         << llival << "\n"
         << c << "\n"
         << fval << "\n"
         << dval << endl;
    return 0;
}