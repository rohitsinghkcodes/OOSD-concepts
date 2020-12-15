#include<iostream>
using namespace std;
class Item {
    int no;
    float cost;
    public:
        void getitem(int a, float b);
        void putItem();
};

void Item::getitem(int a,float b)
{
    no = a;
    cost = b;
}

void Item::putItem()
{
    cout<<no<<endl<<cost;
}
int main()
{
    Item  i;
    i.getitem(10,20.1);
    i.putItem();

    return 0;
}