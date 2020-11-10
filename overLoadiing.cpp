#include<iostream>
using namespace std;

class Univ{
    string st_name;
    int st_rollno;
    double st_perc;

    public:
    void getDetails(string name){
        st_name = name;
    }
    void getDetails(int roll){
        st_rollno = roll;
    }
    void getDetails(double per){
        st_perc = per;
    }

    //For displayinng the details
    void putDetails();
};

void Univ::putDetails()
{
    cout<<"Student Roll no: "<<st_rollno<<endl<<"Student name: "<<st_name<<endl<<"Student percentage: "<<st_perc<<endl;
}

int main()
{
    Univ u;
    u.getDetails("John");
    u.getDetails(170);
    u.getDetails(86.5);
    u.putDetails();

    return 0;
}