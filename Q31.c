#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    // Find the highest power of 2 less than or equal to n
    int highest = 1;
    while (highest <= n)
        highest <<= 1;
    highest >>= 1;

    cout << "Binary: ";
    while (highest > 0) {
        if (n & highest)
            cout << "1";
        else
            cout << "0";
        highest >>= 1;
    }
    cout << endl;
    return 0;
}