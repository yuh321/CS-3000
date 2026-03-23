// Ch12 - 3000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public: 
	string employee_name;
	double salary;
};

class Manager : public Employee
{
public:
	double bonus;
};

int main()
{
	Manager manager_object;
	double total_income;

	getline(cin, manager_object.employee_name);
	cin >> manager_object.salary;
	cin >> manager_object.bonus;

	total_income = manager_object.salary + manager_object.bonus;

	cout << "Manager Name: " << manager_object.employee_name << endl;
	cout << "Salary: " << manager_object.salary << endl;
	cout << "Bonus: " << manager_object.bonus << endl;
	cout << "Total income: " << total_income << endl;

	return 0;
}

//2

class Product
{
	public:
		string product_name;
		double product_price;
};

class DiscountedProducts : public Product
{
	public:
		double discount_percentage;
};

int main()
{
	DiscountedProducts product_object;
	double discount_amount;
	double final_price;

	getline(cin, product_object.product_name);
	cin >> product_object.product_price;
	cin >> product_object.discount_percentage;

	discount_amount = product_object.product_price * product_object.discount_percentage / 100.0;
	final_price = product_object.product_price - discount_amount;

	cout << "Product Name: " << product_object.product_name << endl;
	cout << "Original Price: " << product_object.product_price << endl;
	cout << "Discount Percentage: " << product_object.discount_percentage << endl;
	cout << "Final Price: " << final_price << endl;

	return 0;
}

//3

class Person
{
	public:
		string name;
};

class Student : public Person
{
	public:
		int roll_number;
};

class GraduateStudent : public Student
{
	public:
		int roll_number;
};

class GraduateStudent : public Student
{
	public:
		string degree_name;
};

int main()
{
	GraduateStudent graduate_student_object;

	getline(cin, graduate_student_object.degree_name);
	cin >> graduate_student_object.roll_number;
	cin.ignore();
	getline(cin, graduate_student_object.degree_name);

	cout << "Name: " << graduate_student_object.degree_name << endl;
	cout << "Roll Number: " << graduate_student_object.roll_number << endl;
	cout << "Degree: " << graduate_student_object.degree_name << endl;

	return 0;
}

//4

class Person
{
public:
	string person_name;
};

class Member : public Person
{
public:
	int member_id;
};

class PremiumMember : public Member
{
public:
	int books_borrowed;
};

int main()
{
	PremiumMember premium_member_object;

	getline(cin, premium_member_object.person_name);
	cin >> premium_member_object.member_id;
	cin >> premium_member_object.books_borrowed;

	cout << "Member Name: " << premium_member_object.person_name << endl;
	cout << "Member ID: " << premium_member_object.member_id << endl;
	cout << "Books Borrowed: " << premium_member_object.books_borrowed << endl;

	if (premium_member_object.books_borrowed <= 10)
	{
		cout << "Status: Within Limit" << endl;
	}
	else
	{
		cout << "Status: Limit Exceeded" << endl;
	}

	return 0;
}

//5 