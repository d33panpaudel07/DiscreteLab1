#include <iostream>
using namespace std;

// Function to perform binary addition
int binaryAddition(int x, int y) {
    int carry = 0, result = 0, place = 1;

    while (x > 0 || y > 0 || carry > 0) {
        int bitX = x % 2;
        int bitY = y % 2;
        result += (bitX ^ bitY ^ carry) * place;
        carry = (bitX & bitY) | (bitY & carry) | (bitX & carry);
        x /= 2;
        y /= 2;
        place *= 2;
    }
    return result;
}

// Function to perform binary multiplication
int binaryMultiplication(int x, int y) {
    int result = 0, place = 1;
    while (y > 0) {
        if (y % 2 == 1) {
            result = binaryAddition(result, x * place);
        }

        y /= 2;
        place *= 2;
    }

    return result;
}

int main() {
    int num1, num2;
    cout << "Enter two binary numbers: ";
    cin >> num1 >> num2;

    int additionResult = binaryAddition(num1, num2);
    int multiplicationResult = binaryMultiplication(num1, num2);

    cout << "Binary Addition: " << additionResult << endl;
    cout << "Binary Multiplication: " << multiplicationResult << endl;

    return 0;
}

