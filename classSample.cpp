#include <iostream>
using namespace std;

class Student
{
    int rno;
    string name;

public:
    void details()
    {
        cout << "Enter the roll no and name: ";
        cin >> name >> rno;
    }
    void printdet()
    {
        cout << "name: " << name << endl
             << "Roll no: " << rno << endl;
    }
};
int main()
{
    Student s;
    s.details();
    s.printdet();
    return 0;
}