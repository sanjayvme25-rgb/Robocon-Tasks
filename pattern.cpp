#include <iostream>
using namespace std;

int main() {
    cout<< "Enter the number of rows: ";
    int rows;
    cin >> rows;
    for (int i = rows+2; i >= 1; i -= 2) {
        
        for (int j = rows+2; j > i; j -= 2) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}