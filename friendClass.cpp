#include<iostream>
using namespace std;
class Shape1{
    string shape="Rectange";
    int len = 15;
    public:
    friend class Shape2;
};

class Shape2{
    public:
    void disp(Shape1 s1)
    {
        cout<<"Shape is "<<s1.shape<<endl<<"length is "<<s1.len<<endl;
    }
    
};
int main()
{
    Shape1 s1;
    Shape2 s2;
    s2.disp(s1);
    return 0;
}