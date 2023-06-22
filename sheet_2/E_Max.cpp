#include <iostream>
using namespace std;

int main() {
    int N1; long long int N2, min{0};
    cin >> N1;
    while (N1) {
        cin >> N2;
        if (N2 > min)
            min = N2;
        --N1;
    }
    cout << min << endl;
    return 0;
}
