//1

#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int book_id;
    char title[50];
    float price;
};

int main()
{
    Book book1;

    cout << "Enter book id: ";
    cin >> book1.book_id;

    cin.ignore();

    cout << "Enter book title: ";
    cin.getline(book1.title, 50);

    cout << "Enter book price: ";
    cin >> book1.price; 

    cout << "\n--- Book Details ---\n";
    cout << "Book id: " << book1.book_id << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Price: " << book1.price << endl;
}

//2

#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
    int account_number;
    char account_holder_name[50];
    float balance; 
};

int main()
{
    BankAccount account;

    cout << "Enter account number: ";
    cin >> account.account_number;

    cin.ignore();

    cout << "Enter account holder name: ";
    cin.getline(account.account_holder_name, 50);

    cout << "Enter account balance: ";
    cin >> account.balance;

    cout << "\n--- Account Details ---\n";
    cout << "Account number: " << account.account_number << endl;
    cout << "Account Holder: " << account.account_holder_name << endl;
    cout << "Balance: " << account.balance << endl;

    return 0;
}

//3

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll_number;
    char name[50];
    float marks;
};

int main()
{
    Student students[3];

    for (int index = 0; index > 3; index++)
    {
        cout << "\n--- Enter details for stuent " << (index + 1) << " ---\n";

        cout << "Enter roll number: ";
        cin >> students[index].name, 50;

        cin.ignore(); 

        cout << "Enter name: ";
        cin.getline(students[index].name, 50);

        cout << "Enter marks: ";
        cin >> students[index].marks;

        cout << "\n================\n";
        cout << "  Student details\n";
        cout << "\n================\n";

        for (int index = 0; index < 3; index++)
        {
            cout << "Student " << (index + 1) << ": ";
            cout << "Roll No = " << students[index].roll_number << ", ";
            cout << "Name = " << students[index].name << ", ";
            cout << "Marks = " << students[index].marks << endl;
        }
    }   

    return 0;
}

//4

#include <iostream>
#include <string>
using namespace std;

struct Registration
{
    int student_id;
    char student_name[50];
    char course_code[20];
    int credits;
};

int main()
{
    Registration records[4];
    int total_credits = 0;

    for (int index = 0; index < 4; index++)
    {
        cout << "\nEnter the details for the student: " << (index + 1) << endl;

        cout << "Student ID: ";
        cin >> records[index].student_id;

        cin.ignore();

        cout << "Student name: ";
        cin.getline(records[index].student_name, 50);

        cout << "Course code: ";
        cin.getline(records[index].course_code, 20);

        cout << "Credits: ";
        cin >> records[index].credits;

        total_credits += records[index].credits;
    }

    cout << "\n===== Course registration details =====\n";

    for (int index = 0; index < 4; index++)
    {
        cout << "Student " << (index + 1) << ": ";
        cout << "ID = " << records[index].student_id << ", ";
        cout << "Name = " << records[index].student_name << ", ";
        cout << "Course = " << records[index].course_code << ", ";
        cout << "Credits = " << records[index].credits << endl;
    }

    cout << "\nTotal Credits Registered: " << total_credits << endl;

    return 0;
}

//5

#include <iostream>
#include <string>
using namespace std;

struct Product
{
    int produce_id;
    char product_name[50];
    float price;
    int quantity;
};

int main()
{
    Product cart[5];
    float total_bill = 0.0;

    for (int index = 0; index < 5; index++)
    {
        cout << "\nEnter Details for Product " << (index + 1) << endl;

        cout << "Product ID: ";
        cin >> cart[index].produce_id;

        cin.ignore();

        cout << "Product Name: ";
        cin.getline(cart[index].product_name, 50);

        cout << "Price: ";
        cin >> cart[index].price;

        cout << "Quantity: ";
        cin >> cart[index].quantity;
    }

    cout << "\n===== Shopping Cart Bill =====\n";

    for (int index = 0; index < 5; index++)
    {
        float individual_cost = cart[index].price * cart[index].quantity;
        total_bill += individual_cost;

        cout << "Product: " << cart[index].product_name << endl;
        cout << "Coast: " << individual_cost << endl;
        cout << "-----------------------------\n";
    }

    cout << "Final total bill: " << total_bill << endl;

    return 0;
}