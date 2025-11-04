#include<iostream>
#include<queue>
using namespace std;
class queue{
    public:
    int top,back;
    int *arr;
    int size;
    queue(int size){
        this->size=size;
        arr=new int[size];
        back=-1;
    }
    void insert(int element){
        arr[back]=element;
    }
}