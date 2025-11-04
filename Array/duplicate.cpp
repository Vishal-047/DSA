// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     int arr[50];
//     for(int i=0;i <n; i++){
//         cin>>arr[i];
//     }
//     int arr1[50];
//     for(int i=0;i<n-1;i++){
//         for(int j=1;j<n;j++){
//             if(arr[i]==arr[j])
//             {arr1[i]=arr[i];break;}
            
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr1[i];
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[50];
    cout << "Enter elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int arr1[50]; // Array to store duplicate elements
    int arr1_count = 0; // Counter for number of duplicates found
    
    // Find duplicates
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) { // Start j from i+1 to avoid self-comparison
            if(arr[i] == arr[j]) {
                // Check if arr[i] is already in arr1 to avoid duplicates in arr1
                bool alreadyInArr1 = false;
                for(int k = 0; k < arr1_count; k++) {
                    if(arr1[k] == arr[i]) {
                        alreadyInArr1 = true;
                        break;
                    }
                }
                if(!alreadyInArr1) {
                    arr1[arr1_count++] = arr[i]; // Store duplicate in arr1 and increment counter
                }
                break; // Break after finding the first duplicate for arr[i]
            }
        }
    }
    
    // Output duplicate elements found
    if(arr1_count > 0) {
        cout << "Duplicate elements are: ";
        for(int i = 0; i < arr1_count; i++) {
            cout << arr1[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicate elements found.\n";
    }
    
    return 0;
}
