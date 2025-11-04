# include <iostream>
using namespace std;
void fun(int x)
{
    x = 30;
    cout<<x<<endl;
}

int main()
{
  int y = 20;
  fun(y);
  cout<<y<<endl;
  return 0;
}
