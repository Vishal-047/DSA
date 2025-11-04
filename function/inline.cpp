// Online C++ compiler to run C++ program online
// WAP to calculate the total cost of an item based on its item number,cost, and item purchased. and define a memeber function outside the class defination and make it inline 
#include <iostream>
using namespace std;
class item{
    int item_num; 
    float cost;
    int quantity;
    public:
    void getdata(){
        cout<<"Enter the item number, cost and quantity: ";
        cin>>item_num>>cost>>quantity;
    }
    void net();
};
inline void item::net(){
    float price=quantity*cost;
    cout<<"Net price: "<<price;
}
int main() {
    item i;
    i.getdata();
    i.net();
    return 0;
}