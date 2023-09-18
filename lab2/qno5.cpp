/*5 Write a program to implement the concept of linear congruence.*/
#include <iostream>
using namespace std;
int GCD(int a, int b, int& x, int& y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1;
    int gcdValue = GCD(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcdValue;
}

void linearCongruence(int a, int b, int m) {
    int x, y;
    int gcdValue = GCD(a, m, x, y);

    if (b % gcdValue != 0) {
        cout << "No solution exists.\n";
        return;
    }

    int x0 = (x * (b / gcdValue)) % m;

    cout << "The solutions to " << a << "x = " << b << " (mod " << m << ") are:\n";
    for (int i = 0; i < gcdValue; i++) {
        int solution = (x0 + i * (m / gcdValue)) % m;
        cout << "x = " << solution << " (mod " << m << ")\n";
    }
}

int main() {
    int a, b, m;

    cout << "Enter the values of a, b, and m in ax = b (mod m): ";
    cin >> a >> b >> m;

    linearCongruence(a, b, m);

    return 0;
}
