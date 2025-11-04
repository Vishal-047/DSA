#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n > 15) {
        cout << -1 << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    set<int> uniqueElements(arr.begin(), arr.end());
    int sum = 0;
    for (int num : uniqueElements) {
        sum += num;
    }
    cout << "Sum of unique elements: " << sum << endl;

    return 0;
}
