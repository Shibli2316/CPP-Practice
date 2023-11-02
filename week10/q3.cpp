#include <iostream>
#include <string>
using namespace std;

struct Book {
    int book_id;
    string title;
    string author;
    float price;
};

void printBookDetails(const Book &book) {
    cout << "Book ID: " << book.book_id << endl;
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Price: $" << book.price << endl;
}

int main() {
    Book myBook;

    myBook.book_id = 1;
    myBook.title = "How to be Rich";
    myBook.author = "John Doe";
    myBook.price = 2010;

    printBookDetails(myBook);

    return 0;
}
