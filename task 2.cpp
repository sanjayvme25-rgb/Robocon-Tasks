#include <iostream>

using namespace std;

int main() {
    int num;
    int cnt[10] = {0};

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cnt[0] = 1;
    }

    while (num > 0) {
        int dig = num % 10;
        cnt[dig]++;
        num = num / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (cnt[i] > 0) {
            cout << "Digit " << i << ": " << cnt[i] << "\n";
        }
    }

    return 0;
}