// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int num=arr[i];
//         int count =0;
//         while(num>0){
//             num/=10;
//             count++;
//         }
//         if(count==2){
//             sum+=arr[i];
//         }
//     }
//     cout<<sum;
// }

//          ............................OR.......................

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=10&&arr[i]<=99){
            sum+=arr[i];
        }
    }
        cout<<"Sum: "<<sum;
    return 0;
}