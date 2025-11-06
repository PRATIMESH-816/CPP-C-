#include <iostream>
using namespace std;
int main()
{
    int n = 10; //intiger value
    for (int i = 0; i < n; i++)//outer loop
    {
        char Ch = 'A'; //character value
        for (int j = 0; j < n; j++)//inner loop
        {
            cout << Ch << " "; //printing the Character while printing character it will print the ASCII value then it will convert to character because we have declared the variable as character
            Ch += 1;
            if(Ch==71){//if you want to break the value you can give the value alphabetes or ASCII value to break the condition
                break;
            }
        }

        cout << endl;
    }
    return 0;
}