#include<iostream>
using namespace std;
int GitHub(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i-1;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}
int main(){
    cout<<GitHub(10);
    return 0;
}