#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }
    cout << "Binary: " << (binary.empty() ? "0" : binary) << endl;
}

int main() {
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    decimalToBinary(num);
    return 0;
}
