#include<iostream>
using namespace std;
int factorial(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        num=num*i;
    }
    return num;
}
int factorialrec(int n,int r){
    int factor_n=factorial(n);
    int factor_r=factorial(r);
    int factor_nmr=factorial(n-r);
    return factor_n/(factor_r*factor_nmr);
}
int main(){
   cout<< factorialrec(8,3)<<endl;
    return 0;
}