#include<iostream>
using namespace std;

class Book{
    string Author;
    int noOfPages;

    public:
    void getDetails(string name){
        Author = name;
    }
    void getDetails(int pages){
        noOfPages = pages;
    }

    //For displayinng the details
    void putDetails();
};
// class BookDerived:public Book{
//     void getDetails(int pages){
//         noOfPages = pages;
//     }
// };

void Book::putDetails()
{
    cout<<"Author of Book is: "<<Author<<endl<<"No of pages is: "<<noOfPages<<endl;
}

int main()
{
    Book b;
    //BookDerived d;
    b.getDetails("John Doe");
    b.getDetails(600);
    //d.getDetails(600);
    b.putDetails();

    return 0;
}