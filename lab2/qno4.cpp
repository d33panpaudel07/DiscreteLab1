/*4 Write a program to find prime factors of a number.*/
#include <iostream>
using namespace std;

void pF(int num) 
{
    while (num % 2 == 0) {
        cout << 2 << ",x";
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            cout << i << "x";
            num /= i;
        }
    }

    if (num > 2) {
        cout << num << " ";
    }
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    cout << "Prime factors of given number, " << number << " are : ";
    pF(number);

    cout <<endl;

    return 0;
}

