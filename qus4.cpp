#include<iostream>
using namespace std;

class Book_id
{
    int book_no ;
    char book_name[50];
public:
    void get_id()
    {
        cout<<"Enter book Number : ";
        cin>>book_no;
        cout<<"Enter book Name : ";
        cin>>book_name;
    }
    void put_id()
    {
        cout<<book_no<<"\t"<<book_name;
    }
};
class Book_print
{
    char book_author[50] ;
    char book_publisher[100];
public:
    void get_print()
    {
        cout<<"Enter book's Author name : ";
        cin>>book_author;
        cout<<"Enter book's Publisher name : ";
        cin>>book_publisher;
    }
    void put_print()
    {
        cout<<"\t"<<book_author<<"\t"<<book_publisher;
    }
};
class Book_page : public Book_id,public Book_print
{
    int page_no ;
    int publication_year;
public:
    void get_page()
    {
        cout<<"Enter number of pages : ";
        cin>>page_no;
        cout<<"Enter year of publication year : ";
        cin>>publication_year;
    }
    void put_page()
    {
        cout<<"\t"<<page_no<<"\t"<<publication_year;
    }
};
int main()
{
    Book_page Book;
    Book.get_id();
    Book.get_print();
    Book.get_page();
    cout<<"\nBook Details :\n\nID\tName\tAuther\tPublisher\tPages\tYear of Publication\n";
    Book.put_id();
    Book.put_print();
    Book.put_page();
    return 0;
}
