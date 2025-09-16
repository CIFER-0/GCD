#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long A, B;

    cout << "Enter two numbers (A and B): ";
    cin >> A >> B;

    cout << "GCD of " << A << " and " << B << " is: " << gcd(A, B) << endl;

    return 0;
}

