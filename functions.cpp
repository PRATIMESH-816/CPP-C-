// function give life to programing
#include <iostream>
using namespace std;
// defining a function or declaration of function
void printhii()
{ // void means no return type in function and printhello is the name of the function
    cout << "Hello world" << endl;
}
int printhello()
{                                  // int means the return type of the function is integer
    cout << "Hello world" << endl; // function body
    return 3;                      // returning integer value
}
// sum of 2 numbers
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// min of 2 number
int minvalue(int a, int b)
{ // a and b are parameters
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    // cout<<printhello()<<endl;//printing the return value of the function
    // calling the function
    //  printhii();
    //  cout<<sum(10,5); 10 and 5 are arguments passed to the function
    cout << "min = " << minvalue(10, 15) << endl;

    //and literal are values that doesnot change during the execution of the program and in function we will pass agruments values they are also literals 
    return 0;
}