#include<iostream>
using namespace std;
class Area{
    int r,l,b;
    public:
    void calArea(int rd)
    {
        r=rd;
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
    void calArea(int l,int b)
    {
        cout<<"Area of rectangle is "<<l*b<<endl;
    }
};
int main()
{
    Area a;
    a.calArea(10);
    a.calArea(10,20);
    return 0;
}