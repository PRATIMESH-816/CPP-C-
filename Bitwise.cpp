#include <iostream>
using namespace std;
int main()
{
    // cout << (8 & 2) << endl;  AND
    // cout << (8 | 2) << endl;  OR
    // cout << (8 ^ 2) << endl;  XOR
    // cout << (8 >> 2) << endl; RTGHT SHIFT
    // cout << (8 << 2) << endl; LEFT SHIFT
    int long long a = 12123;
    int long b = 12345;
    int short c = 1;
    unsigned int d = 1234;
    signed int e = -1234;
    cout << sizeof(a) << endl; // 8
    cout << sizeof(b) << endl; // 4
    cout << sizeof(c) << endl; // 2
    cout << sizeof(d) << endl; // 4
    cout << sizeof(e) << endl; // 4
    return 0;
}