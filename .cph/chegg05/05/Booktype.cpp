#include<iostream>
using namespace std;

//Class declaration
class BookType
{
    //Assigning private variavbles
    private:
        long long isbn;
        int year,availableCopies;
        string title,publisher;
        double rentalRate;
    public:
    //Default constructor
        BookType()
        {
            isbn=0;
            year=0;
            availableCopies=0;
            title="NA";
            publisher="NA";
            rentalRate=0;
        }
        //perameterised constructor
        BookType(long long isbn,string title,string publisher,int year,double rentalRate,int availableCopies)
        {
            this->isbn=isbn;
            this->title=title;
            this->publisher=publisher;
            this->year=year;
            this->rentalRate=rentalRate;
            this->availableCopies=availableCopies;

        }
        //setters
        void setIsbn(long long isbn){
            this->isbn=isbn;
        }
        void setTitle(string title){
            this->title=title;
        }
        void setPublisher(string publisher){
            this->publisher=publisher;
        }
        void setYear(int year){
            this->year=year;
        }
        void setRentalrate(double rentalRate){
            this->rentalRate=rentalRate;
        }
        void setAvailablecopies(int availableCopies){
            this->availableCopies=availableCopies;
        }
        //getters
        long long getIsbn()
        {
            return isbn;
        }
        string getTitle()
        {
            return title;
        }
        string getPublisher()
        {
            return publisher;
        }
        int getYear()
        {
            return year;
        }
        double getrentalRate()
        {
            return rentalRate;
        }
        int getavailableCopies()
        {
            return availableCopies;
        }
        //method
        void printBookInfo()
        {
            cout<<"Title: "<<title;
            cout<<"\nISBN: "<<isbn;
            cout<<"\npublisher: "<<publisher;
            cout<<"\n   ==Available copies:"<<availableCopies;
        }
};
//main
int main()
{
    //creating obj
    BookType b=BookType(9781337102087,"c++ programming","cengage",2000,23.5,5);
    b.printBookInfo();
}