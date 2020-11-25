#include<iostream>
using namespace std;

class Box{
    int height;
    int width;
    public:
    void setDim()
    {
        cout<<"enter height and width: ";
        cin>>height>>width;
    }
    friend void printBox(Box b);
};

void printBox(Box b){
    cout<<"Height: "<<b.height<<endl<<"Width: "<<b.width<<endl;
}
int main()
{
    Box bx;
    bx.setDim();
    printBox(bx);
    return 0;
}