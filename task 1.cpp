#include <iostream>

using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 readings:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    int low = 0;
    int high = 0;

    for (int i = 0; i < 10; i++) {
        sum = sum + arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] < 20) {
            low++;
        }

        if (arr[i] > 100) {
            high++;
        }
    }

    int avg = sum / 10;

    cout << "Max: " << max << "\n";
    cout << "Min: " << min << "\n";
    cout << "Avg: " << avg << "\n";
    cout << "Below 20: " << low << "\n";
    cout << "Above 100: " << high << "\n";

    return 0;
}