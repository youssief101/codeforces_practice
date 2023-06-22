#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1;
    while (N1) {
        cin >> N2;
        unsigned long long int result{1};
        while (N2)
            result *= N2--;
        cout << result << endl;
        --N1;
    }
    return 0;
}
