#include <bits/stdc++.h>
using namespace std;
class Book {
   public:
    string isbn;
    string title;
    vector<string> authors;
    int price;
    Book(string isbn, string title, vector<string> aurhors, int price)
        : isbn(isbn), title(title), authors(authors), price(price) {}
};

class BookStore {
   private:
    unordered_map<Book, int> book;
    long totalAmt;

   public:
    BookStore() : totalAmt(0) {}

    void addBook(Book& c) {
        if (book.find(c) != book.end()) {
            book[c]++;
        } else {
            book[c] = 0;
        }
        totalAmt += c.price;
    }

    vector<string> books() {
        vector<string> isbns;
        for (auto it : book) {
            isbns.push_back(it.first.isbn);
        }
        return isbns;
    }

    int noOfCopies(string isbn) {
        for (auto it : book) {
            if (it.first.isbn == isbn) {
                return it.second;
            }
        }
        return 0;
    }
    long totalPrice() { return totalAmt; }
};

int main() {
    vector<string> mathsAuthor = {"KGF", "BCD"};
    Book b1("001", "Maths Book", mathsAuthor, 3000);
    vector<string> physicsAuthor = {"SGC"};
    Book b2("002", "Physics Book", physicsAuthor, 1000);
    BookStore bs;
    bs.addBook(b1);
    bs.addBook(b2);
    bs.addBook(b2);
    bs.addBook(b2);
    vector<string> book;
    book = bs.books();

    for (auto i : book) {
        cout << "No of copies: " << bs.noOfCopies(i);
    }
}