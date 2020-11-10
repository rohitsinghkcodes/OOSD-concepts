#include <iostream>
using namespace std;
inline void check(int n)
{
    int x=n+20;
    cout<<x<<endl;
}
int main() {
    cout<<"hello"<<endl;
    int x=10;
    check(x);

    return 0;
}
//without inline->0.665
//with inline->0.593