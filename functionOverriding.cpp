#include<iostream>
using namespace std;
class BaseCheck{
    public:
    void resultCheck()
    {
        cout<<"Printing in BaseCheck"<<endl;
    }
};
class DerivedCheck:public BaseCheck{
    public:
    void resultCheck()
    {
        cout<<"Printing in DerivedCheck by overriding."<<endl;
    }
};
int main()
{
    DerivedCheck d1,d2;
    //Normal output
    d1.resultCheck();
    ///Referring BaseCheck
    d2.BaseCheck::resultCheck();
    return 0;
}