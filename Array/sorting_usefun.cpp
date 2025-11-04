#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[10]={1, 2 ,63, 44,25,16,7};
    sort(arr, arr+7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}