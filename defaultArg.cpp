#include<iostream>
using namespace std;
int funcCheck(int a,int b=20,int c=6)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
    //cout<<"Default Value: ";
    //funcCheck();
    cout<<"new Value:";
    funcCheck(60);
    return 0;
}