#include <iostream>
using namespace std;

template <class T>
T sum(int n, T arr[]) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int intArr[n];
    cout << "Sum of integers: " << sum(n, intArr) << endl;

    float floatArr[n];
    cout << "Enter float values: "<<endl;
    cout << "Sum of floats: " << sum(n, floatArr) << endl;

    return 0;
}
