#include <iostream>
using namespace std;

int sum(int num) {
    if (num==0){
        return 0;
    }
    else
    return num+sum(num-1);
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    int result = sum(num);
    cout << "Sum of digits: " << result << endl;
    return 0;
}
