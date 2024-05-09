#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int n) {
    if (n == 0) {
        return;
    } else {
        decimalToBinary(n / 2);
        cout << n % 2;
    }
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary equivalent: ";
    decimalToBinary(decimal);

    return 0;
}

