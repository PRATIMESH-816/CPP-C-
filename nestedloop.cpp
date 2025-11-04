#include <iostream>
using namespace std;
int main()
{
    //This how the nested loop will works in c++
    int n = 4;
    for (int i = 1; i <= n; i++)//outer loop
    {
        for (int j = 1; j <= n; j++)//inner loop
        {
            cout << j << " ";
        }
        cout << endl;
    }
    /*
    4x4 Matrix
  Output:
      j[1] j[2] j[3] j[4]
  i[1]  1    2    3    4
  i[2]  1    2    3    4
  i[3]  1    2    3    4
  i[4]  1    2    3    4
    */ 
    return 0;
}