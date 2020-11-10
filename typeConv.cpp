#include<iostream>
using namespace std;
int main()
{
    //implicit type conversion
    char x='a';
    int a=5;
    cout<<x+a<<endl;
    x=x+a;
    float z= x+1.1;
    cout<<z<<endl;

    //Explicit type conversion
    cout<<(char)(x+a)<<endl;

    double ne = 10.45;
    int l;
    l=int(ne);
    cout<<l<<endl;
    return 0;

}