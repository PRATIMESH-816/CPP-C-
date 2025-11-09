#include <iostream>
using namespace std;
int num(int decNum){
    int binary=0,pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        binary+=(rem*pow);
        pow*=10;
    }
    return binary;
}
int binaryTodecimal(int binNum){
    int ans=0,pow=1;
    while(binNum>0){
        int rem=binNum%10;
        ans+=rem*pow;
        binNum/=10;
        pow*=2;
    }
    return ans;
}

int main()
{
    //  cout<<binaryTodecimal(10100)<<endl;

        cout<<num(12)<<endl;
   
    return 0;
}