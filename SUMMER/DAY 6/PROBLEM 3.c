#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1); // check last bit
        n >>= 1;          // right shift
    }
    return count;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Set bits: " << countSetBits(num) << endl;
    return 0;
}
