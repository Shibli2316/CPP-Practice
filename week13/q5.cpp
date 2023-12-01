#include <iostream>
#include <string>
using namespace std;

class Publication {
private:
    string title;
    string writerName;

public:
    Publication(const string& t, const string& writer)
        : title(t), writerName(writer) {}

    string getTitle() const {
        return title;
    }

    string getWriterName() const {
        return writerName;
    }
};

class Sales {
private:
    int salesCount[3];

public:

    Sales(int sales1, int sales2, int sales3) {
        salesCount[0] = sales1;
        salesCount[1] = sales2;
        salesCount[2] = sales3;
    }

    int calculateTotalSales() const {
        int totalSales = 0;
        for (int i = 0; i < 3; ++i) {
            totalSales += salesCount[i];
        }
        return totalSales;
    }
};

int main() {
    string bookTitle, writerName;
    int sales1, sales2, sales3;

    cout << "Enter the title of the book: ";
    getline(cin, bookTitle);

    cout << "Enter the writer's name: ";
    getline(cin, writerName);

    cout << "Enter sales for month 1: ";
    cin >> sales1;

    cout << "Enter sales for month 2: ";
    cin >> sales2;

    cout << "Enter sales for month 3: ";
    cin >> sales3;

    Publication book(bookTitle, writerName);

    Sales bookSales(sales1, sales2, sales3);

    // Display information
    cout << "\nBook Information:" << endl;
    cout << "Title: " << book.getTitle() << endl;
    cout << "Writer's Name: " << book.getWriterName() << endl;

    cout << "\nSales Information:" << endl;
    cout << "Total Sales for all months: " << bookSales.calculateTotalSales() << " copies" << endl;

    return 0;
}
