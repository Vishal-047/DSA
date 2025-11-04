#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int alpha = 65 + i;
        for (int j = 1; j <= n; j++)
        {
            cout << char(alpha) << " ";
            alpha++;
        }
        cout << endl;
    }

    return 0;
}