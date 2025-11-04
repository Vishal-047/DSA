#include <iostream>
using namespace std;

class Complex {
    int real, img;
    
    public:
    Complex() {
        real = 0;
        img = 0;
    }
    
    Complex(int x, int y) {
        real = x;
        img = y;
    }
    
    friend Complex operator+(Complex, Complex);
    
    void show_data() {
        cout << real << "+" << img << "i" << endl;
    }
};

Complex operator+(Complex o1, Complex o2) {
    Complex temp;
    temp.real = o1.real + o2.real;
    temp.img = o1.img + o2.img;
    return temp;
}

int main() {
    Complex o1(1, 2), o2(3, 4), o3;
    o3 = o1 + o2;
    o3.show_data();
    return 0;
}
