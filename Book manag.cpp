
#include <iostream>
#include <vector>
using namespace std;

/*
  Book Class
  Demonstrates Encapsulation & Constructors
*/
class Book {
private:
    int bookId;
    string title;
    string author;

public:
    // Constructor
    Book(int id, string t, string a) {
        bookId = id;
        title = t;
        author = a;
    }

    // Display Book Details
    void displayBook() const {
        cout << "Book ID   : " << bookId << endl;
        cout << "Title     : " << title << endl;
        cout << "Author    : " << author << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\n===== Week01 : Basic Book Manager =====\n";
        cout << "1. Add Book\n";
        cout << "2. View All Books\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;

            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, title);

            cout << "Enter Author Name: ";
            getline(cin, author);

            books.push_back(Book(id, title, author));
            cout << "Book Added Successfully!\n";
        }
        else if (choice == 2) {
            if (books.empty()) {
                cout << "No books available.\n";
            } else {
                for (const auto& book : books) {
                    book.displayBook();
                }
            }
        }
        else if (choice == 0) {
            cout << "Exiting Program...\n";
        }
        else {
            cout << "Invalid Choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
