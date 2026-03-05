#include <iostream>
using namespace std;

struct employee_record
{
	int employee_id;
	int salary;
};

void increase_salary(employee_record employee_copy, int bonus_amount)
{
	employee_copy.salary = employee_copy.salary + bonus_amount;

	cout << "Inside function (copy): " << employee_copy.salary << endl;
}

int main()
{
	employee_record employee_main;
	int bonus_amount;

	cin >> employee_main.employee_id;
	cin >> employee_main.salary;
	cin >> bonus_amount;

	cout << "Before function call (main): " << employee_main.salary << endl;

	increase_salary(employee_main, bonus_amount);

	cout << "After function call (main): " << employee_main.salary << endl;

	return 0;
}

//2

struct rectangle
{
	int length;
	int width;
};
void resize_rectangle(rectangle rect_copy, int factor)
{
	rect_copy.length = rect_copy.length * factor; 
	rect_copy.width = rect_copy.width * factor;
	
	int area_inside = rect_copy.length + rect_copy.width;
	cout << "Area inside function (copy): " << area_inside << endl;
}

int main()
{
	rectangle rect_main;
	int factor;

	cin >> rect_main.length; 
	cin >> rect_main.width;
	cin >> factor;
	
	int area_before = rect_main.length * rect_main.width; 
	cout << "Area before call (main): " << area_before << endl;
	
	resize_rectangle(rect_main, factor);
	
	int area_after = rect_main.length * rect_main.width; 
	cout << "Area after call (main): " << area_after << endl;
		
	return 0;
}

//3

struct bank_account
{
	int account_number;
	int balance;
};

void deposit_money(bank_account &account_ref, int deposit_amount)
{
	account_ref.balance = account_ref.balance + deposit_amount;
	cout << "Balance inside function (reference): " << account_ref.balance << endl;
}

int main()
{
	bank_account account_main;
	int deposit_amount;

	cin >> account_main.account_number;
	cin >> account_main.balance;
	cin >> deposit_amount;

	cout << "Balance before call (main): " << account_main.balance << endl;

	deposit_money(account_main, deposit_amount);

	cout << "Balance after call (main): " << account_main.balance << endl;

	return 0;
}

//4


struct temperature_record
{
	float celsius;
};

void convert_to_fahrenheit(temperature_record& temp_ref)
{
	temp_ref.celsius = (temp_ref.celsius * (9.0f / 5.0f)) + 32.0f;
	cout << "Inside function (reference): " << temp_ref.celsius << endl;
}

int main()
{
	temperature_record temp_main;

	cin >> temp_main.celsius;

	cout << "Before call (main): " << temp_main.celsius << endl;

	convert_to_fahrenheit(temp_main);

	cout << "After call (main): " << temp_main.celsius << endl;

	return 0;
}

//5

struct product_record
{
	int product_id;
	float price;
};

product_record create_product(int product_id, float price);

int main()
{
	int product_id;
	float price;

	cin >> product_id;
	cin >> price;

	product_record product_main = create_product(product_id, price);

	cout << "Product ID: " << product_main.product_id << endl;
	cout << "Price: " << product_main.price << endl;

	return 0;
}
	
product_record create_product(int product_id, float price)
{
	product_record temp_product;
	temp_product.product_id = product_id;
	temp_product.price = price;

	return temp_product;
}

//6

struct result_record
{
	int total;
	float average;
};

result_record calculate_result(int mark1, int mark2, int mark3);

int main()
{
	int mark1, mark2, mark3;
	cin >> mark1 >> mark2 >> mark3;

	result_record result_main = calculate_result(mark1, mark2, mark3);

	cout << "Total: " << result_main.total << endl;
	cout << "Average: " << result_main.average << endl;

	return 0;
}

result_record calculate_result(int mark1, int mark2, int mark3)
{
	result_record temp_result;

	temp_result.total = mark1 + mark2 + mark3;
	temp_result.average = temp_result.total / 3.0f;

	return temp_result;
}