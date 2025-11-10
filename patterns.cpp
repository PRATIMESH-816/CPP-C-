// this is a pattern printing program give by shradha mam on youtube frist i undastnd the concept of nested loop loops and condtional stetments etc then i solved this pattern problem
#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    char Ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Ch << " ";
            // Ch++; OR
            Ch += 1;
        }
        cout << endl;
    }
    return 0;
}
//outPut: A B C D E F G H I