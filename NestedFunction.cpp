#include<iostream>
using namespace std;

class LargeCheck{
    int m,n;
    
    public:
        void input();
        void output();
        int larger();

};

void LargeCheck :: input()
{
    cin>>m>>n;
}

int LargeCheck :: larger()
{
    if(m>n) return m;
    else return n;
}

void LargeCheck :: output()
{
    cout<<"Largest value is: "<<larger()<<endl;
}


int main()
{
    LargeCheck lc;
    lc.input();
    lc.output();
    return 0;
}