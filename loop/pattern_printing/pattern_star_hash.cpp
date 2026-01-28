#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        if (i == n) {
            // Last row: all stars
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }
        } else {
            // First part: stars
            for (int j = 1; j <= i; j++) {
                if (j == 1 || j == i) {
                    cout << "*";   // boundary stars
                } else {
                    cout << " ";   // spaces in between
                }
            }
            // Second part: hashes (#)
            for (int j = 1; j <= n - i; j++) {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}
