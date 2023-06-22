#include <iostream>
using namespace std;


int main() {
    int N1, N2, p{0}, n{0}, e{0}, o{0};
    cin >> N1;
    for (int i{0}; i < N1; ++i) {
        cin >> N2;
        if (N2 > 0)
            ++p;
        else if (N2 < 0)
            ++n;
        if (N2 % 2 == 0)
            ++e;
        else
            ++o;
    }
    cout << "Even: " << e << "\n" << "Odd: " << o << "\n" << "Positive: " << p << "\n" << "Negative: " << n << endl;
    return 0;
}
