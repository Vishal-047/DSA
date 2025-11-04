#include<iostream>
using namespace std;



// In wave print the output will be in the form of wave i.e the column output of the even indexes will be from top to bottom and that of odd indexes is from bottom to top........
int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    int columns;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    int arr[20][20];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];
        }
    }


    for(int j=0; j<columns; j++){
        if(j%2==0){
            for(int i=0; i<rows; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=rows-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
        }
    }
    }

    return 0;
}
