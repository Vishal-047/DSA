#include <iostream>
using namespace std;

class ClassY;
class ClassZ;

class ClassX {
    private:
        int a;
    public:
        void ipa() { a = 10; }
        friend float average(ClassX, ClassY, ClassZ);
} X;

class ClassY {
    private:
        int b;
    public:
        void ipb() { b = 20; }
        friend float average(ClassX, ClassY, ClassZ);
} Y;

class ClassZ {
    private:
        int c;
    public:
        void ipc() { c = 30; }
        friend float average(ClassX, ClassY, ClassZ);
} Z;

float average(ClassX objectX, ClassY objectY, ClassZ objectZ) {
    float avg;
    avg = (objectX.a + objectY.b + objectZ.c) / 3.0;
    return avg;
}

int main() {
    X.ipa();
    Y.ipb();
    Z.ipc();
    cout << "Average: " << average(X, Y, Z) << endl;
    return 0;
}
