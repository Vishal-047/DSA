#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[0][i];
    }

    // Build XOR triangle
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            arr[i][j] = arr[i - 1][j] ^ arr[i - 1][j + 1];
        }
    }

    cout << "\nXOR Triangle:\n";
    for (int i = n; i >= 0; i--) {
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
