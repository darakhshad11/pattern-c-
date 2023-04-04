#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int reverse_num = 0;

    while (num > 0) {
        reverse_num = (reverse_num << 1) | (num & 1);
        num = num >> 1;
    }

    cout << reverse_num << endl;

    return 0;
}