#include <iostream>
using namespace std;

int main() {
    long long int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;
    if (L1 < L2 && R1 > R2)
        cout << L2 << " " << R2 << endl;
    else if (L1 > L2 && R1 < R2)
        cout << L1 << " " << R1 << endl;
    else if ((L1 <= L2) && (R1 <= R2) && (L2 <= R1))
        cout << L2 << " " << R1 << endl;
    else if ((L1 >= L2) && (R1 >= R2) && (L1 <= R2))
        cout << L1 << " " << R2 << endl;
    else
        cout << "-1" << endl;
    return 0;
}