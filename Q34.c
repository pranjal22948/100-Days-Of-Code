#include <iostream>
using namespace std;

int main() {
    int n, i, isPrime = 1;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "Not a prime number" << endl;
        return 0;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        cout << "Prime number" << endl;
    else
        cout << "Not a prime number" << endl;

    return 0;
}