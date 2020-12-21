#include<iostream>
using namespace std;

class ArrayCheck{
    int ar[50];
    int count = 0;
    public:
        void getEle();
        void putEle();
};

void ArrayCheck :: getEle()
{
    cout<<"Enter the element: ";
    cin>>ar[count];

    count++;
}

void ArrayCheck :: putEle()
{
    cout<<endl<<"Array values are: "<<endl;
    for(int i = 0 ; i < count ; i++)
    {
        cout<<ar[i]<<endl;
    }
}

int main()
{
    ArrayCheck ac;
    int opt;
    while(opt!=0)
    {
        ac.getEle();
        cout<<"Do you want to enter more(0/1): ";
        cin>>opt;
    }

    ac.putEle();

    return 0;
}