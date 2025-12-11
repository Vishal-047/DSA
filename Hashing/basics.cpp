#include<bits/stdc++.h>
using namespace std;

int fn(int n, int arr[]){
    int count=0;
    for(int i=0;i<5;i++){
        if(n==arr[i]) count++;
    }
    return count;
}
int main(){
    int arr[5]={1,2,2,3,4};
    int q[4]={0,2,4,1};
    for(int i=0;i<4;i++){
        cout<<q[i]<<" appears "<<fn(q[i],arr)<<" times in the array"<<endl;
    }
}

//for each query, we will call the function and it will return the number of times the given query appears in the array....
//for each query, we are calling this function(fn). So, if the query contains 5 numbers and we call the function 5 times, the total time complexity will be O(5*N). If the number of queries is Q, the time complexity will be O(Q*N). 
// Now, if the length of the query becomes large like 10^5 and the array size also becomes large like 10^5, the time complexity will be O(10^10).

// In order to optimize this approach, we need to use hashing. If we say the definition of hashing in a naive way, it is nothing but the combination of the steps, pre-storing, and fetching.