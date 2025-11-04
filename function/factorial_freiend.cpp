#include<iostream>
using namespace std;
class Factorial;
class Input
{
    int n;
    public:
    void get()
    {
        cin >> n;
    }
    friend class Factorial;
};
class Factorial
{
    public:
    int calculate(Input obj)
    {
        int fact = 1;
        for(int i = 1; i <= obj.n; i++)
        {
            fact *= i; 
        }
        return fact;
    }
};

int main()
{
    Input inputObj;
    Factorial factorialObj;
    inputObj.get();
    cout << "Factorial is: " << factorialObj.calculate(inputObj) << endl;
    return 0;
}
