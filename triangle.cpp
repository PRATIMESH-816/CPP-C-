#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = i + 1; j > 0; j--)
        {
            char a = ch + j - 1;
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}