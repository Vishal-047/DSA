#include<iostream>
using namespace std;
class Rectangle{
    static int count;
    int l,b;
    public:
    Rectangle(){
        count++;
    }
    static int getcount(){
        return count;
    }
    void setDimensions(int length, int width){
        l=length;
        b=width;
    }
    int getArea() const{
        return l*b;
    }
};
int Rectangle::count=0;
int main(){
    int n;
    cin>>n;
    Rectangle rectangles[n];
    for(int i=0; i<n; i++){
        int l, b;
        cin>>l >>b;
        rectangles[i].setDimensions(l,b);
    }
    cout<<"Total number of rectangles: "<<n<<endl;
    for(int i=0; i<n; i++){
        cout<<"Area of rectangle "<<i+1<<": "<<rectangles[i].getArea()<<endl;
    }
}

//..........................................OR...................................................
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         int l, b;
//         cin>>l>>b;
//         arr[i]=l*b;
//     }
//     cout<<"Number of triangle: "<<n<<endl;
//     for(int i=0;i<n;i++){
//         cout<<"Area of rectangle "<<i+1<<": "<<arr[i]<<endl;
//     }
// }


//THIS CODE WILL TAKE THE INPUT OF NUMBER OF RECTANGLE AND PRINT THE AREA OF EACH RECTANGLE.......