#include<iostream>
using namespace std;
class One{
    public:
    virtual void checkOne()
    {
        cout<<"Check Point one"<<endl;
    }
};

class DerivedOne:public One
{
    public:
    void checkOne()
    {
        cout<<"Check Point two"<<endl;
    }
};
int main()
{
    One *o;
    DerivedOne d;
    o = &d;
    o->checkOne();
    return 0;
}