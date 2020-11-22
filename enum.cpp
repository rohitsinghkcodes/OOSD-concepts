#include<iostream>
using namespace std;
int main()
{
    enum week{Monday=8,TuesDay,Wednesdat,Thursday,Friday,Saturday,Sunday};
    int i;
    for(int i=Monday; i<=Saturday; i++)
        {
            cout<<i<<endl; 
        }
    return 0;
}
