#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void set_dimensions(float rect_length, float rect_width)
    {
        length = rect_width;
        width = rect_width;
    }

    float get_area()
    {
        return length * width;
    }

    float get_perimeter()
    {
        return 2 * (length + width);
    }

    void display_details()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << get_area() << endl;
        cout << "Perimeter: " << get_perimeter() << endl;
    }
};

int main()
{
    Rectangle rect_1;

    rect_1.set_dimensions(5.0, 3.0);
    rect_1.display_details();

    return 0;
}

//2

class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficent balance." << endl;
        }
    }

    void display_balance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account_1;

    account_1.deposit(500);
    account_1.display_balance();

    account_1.withdraw(200);
    account_1.display_balance();

    account_1.withdraw(1000);

    return 0;
}

//3

class PhoneBattery
{
private:
    int battery_level;

public:
    PhoneBattery()
    {
        battery_level = 50;
    }

    void charge(int amount)
    {
        if (amount > 0)
        {
            battery_level += amount;
            if (battery_level > 100)
            {
                battery_level = 100;
            }
        }
    }

    void use_phone(int minutes)
    {
        if (minutes > 0)
        {
            battery_level -= minutes;
            if (battery_level < 0)
            {
                battery_level = 0;
            }
        }
    }

    void display_battery()
    {
        cout << "Battery Level: " << battery_level << "%" << endl;
    }
};

int main()
{
    PhoneBattery phone_1;

    phone_1.display_battery();
    phone_1.use_phone(20);
    phone_1.display_battery();
    phone_1.charge(40);
    phone_1.display_battery();

    return 0;
}

//4

class ShoppingItem
{
private:
    string item_name;
    float price;
    int quantity;

public:
    void set_item(string name, float pri, int qty)
    {
        item_name = name;

        if (pri > 0)
        {
            price = pri;
        }
        else
        {
            price = 0;
        }

        if (qty > 0)
        {
            quantity = qty;
        }
        else
        {
            quantity = 0;
        }
    }

    float get_total_cost()
    {
        return price * quantity;
    }

    void display_bill()
    {
        cout << "Item Name: " << item_name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Cost: " << get_total_cost() << endl;
    }
};

int main()
{
    ShoppingItem item_1;

    item_1.set_item("Milk", 2.5, 4);
    item_1.display_bill();

    return 0;
}

//5

class MarksTable
{
private:
    int marks[3][4];

public:
    void input_marks()
    {
        for (int student_index = 0; student_index < 3; student_index++)
        {
            cout << "Enter marks for Student " << student_index + 1 << " (4 subjects):" << endl;

            for (int subject_index = 0; subject_index < 4; subject_index++)
            {
                cout << "Subject " << subject_index + 1 << ": ";
                cin >> marks[student_index][subject_index];
            }
        }
    }

    void display_marks()
    {
        cout << "\nMarks Table (3 x 4):\n";
        for (int student_index = 0; student_index < 3; student_index++)
        {
            cout << "Student " << student_index + 1 << ": ";
            for (int subject_index = 0; subject_index < 4; subject_index++)
            {
                cout << marks[student_index][subject_index] << " ";
            }
            cout << endl;
        }
    }

    void display_student_average(int student_index)
    {
        int sum = 0;

        for (int subject_index = 0; subject_index < 4; subject_index++)
        {
            sum += marks[student_index][subject_index];
        }

        float average = sum / 4.0;
        cout << "Average of Student " << student_index + 1 << " = " << average << endl;
    }
};

int main()
{
    MarksTable marks_table;

    marks_table.input_marks();
    marks_table.display_marks();
    marks_table.display_student_average(0);

    return 0;
}

//6

class WeatherReport
{
private:
    float temp[7][2];

public:
    void input_temperature()
    {
        for (int day = 0; day < 7; day++)
        {
            cout << "Day " << day + 1 << " Morning temp: ";
            cin >> temp[day][0];

            cout << "Day " << day + 1 << " Evening temp: ";
            cin >> temp[day][1];
        }
    }

    void display_temperature()
    {
        cout << "\nTemperatures (Morning, Evening):\n";
        for (int day = 0; day < 7; day++)
        {
            cout << "Day " << day + 1 << ": " << temp[day][0] << ", " << temp[day][1] << endl;
        }
    }

    void display_hottest_day()
    {
        int hottest_day_index = 0;
        float max_avg = (temp[0][0] + temp[0][1]) / 2.0;

        for (int day = 1; day < 7; day++)
        {
            float day_avg = (temp[day][0] + temp[day][1]) / 2.0;

            if (day_avg > max_avg)
            {
                max_avg = day_avg;
                hottest_day_index = day;
            }
        }

        cout << "Hottest Day: Day " << hottest_day_index + 1 << " (Avg = " << max_avg << ")" << endl;
    }
};

int main()
{
    WeatherReport report;

    report.input_temperature();
    report.display_temperature();
    report.display_hottest_day();

    return 0;
}

//7

enum SlotStatus
{
    EMPTY,
    OCCUPIED,
    RESERVED
};

class WarehouseSystem
{
private:
    int shelf_units[4][5];
    SlotStatus slot_status[4][5];

    int shipped_units_per_day[7];
    int total_units_in_warehouse;

public:
    void initialize_system()
    {
        total_units_in_warehouse = 0;

        for (int day_index = 0; day_index < 7; day_index++)
        {
            shipped_units_per_day[day_index] = 0;
        }

        for (int row = 0; row < 4; row++)
        {
            for (int col = 0; col < 5; col++)
            {
                shelf_units[row][col] = 0;
                slot_status[row][col] = EMPTY;
            }
        }
    }

    void display_shelf_map()
    {
        cout << "\nShelf Map (E=EMPTY, O=OCCUPIED, R=RESERVED)\n";
        for (int row = 0; row < 4; row++)
        {
            cout << "Row " << row + 1 << ": ";
            for (int col = 0; col < 5; col++)
            {
                if (slot_status[row][col] == EMPTY)
                {
                    cout << "E ";
                }
                else if (slot_status[row][col] == OCCUPIED)
                {
                    cout << "O ";
                }
                else
                {
                    cout << "R ";
                }
            }
            cout << endl;
        }
    }

    void reserve_slot(int row, int col)
    {
        if (row < 0 || row >= 4 || col < 0 || col >= 5)
        {
            cout << "Invalid slot position!" << endl;
            return;
        }

        if (slot_status[row][col] == EMPTY)
        {
            slot_status[row][col] = RESERVED;
            cout << "Slot reserved successfully!" << endl;
        }
        else
        {
            cout << "Cannot reserve. Slot is not empty." << endl;
        }
    }

    void add_stock(int row, int col, int units)
    {
        if (row < 0 || row >= 4 || col < 0 || col >= 5)
        {
            cout << "Invalid slot position!" << endl;
            return;
        }

        if (units <= 0)
        {
            cout << "Units must be greater than 0!" << endl;
            return;
        }

        if (slot_status[row][col] == OCCUPIED)
        {
            cout << "Cannot add stock. Slot already occupied!" << endl;
            return;
        }

        shelf_units[row][col] = units;
        slot_status[row][col] = OCCUPIED;
        total_units_in_warehouse += units;

        cout << "Stock added successfully! Units added: " << units << endl;
    }

    void ship_stock(int row, int col, int units, int day_number)
    {
        if (row < 0 || row >= 4 || col < 0 || col >= 5)
        {
            cout << "Invalid slot position!" << endl;
            return;
        }

        if (day_number < 1 || day_number > 7)
        {
            cout << "Invalid day number! Use 1 to 7." << endl;
            return;
        }

        if (units <= 0)
        {
            cout << "Units must be greater than 0!" << endl;
            return;
        }

        if (slot_status[row][col] != OCCUPIED)
        {
            cout << "Cannot ship. Slot is not occupied!" << endl;
            return;
        }

        if (units > shelf_units[row][col])
        {
            cout << "Not enough stock in this slot!" << endl;
            return;
        }

        shelf_units[row][col] -= units;
        total_units_in_warehouse -= units;
        shipped_units_per_day[day_number - 1] += units;

        cout << "Shipped successfully! Units shipped: " << units << endl;

        if (shelf_units[row][col] == 0)
        {
            slot_status[row][col] = EMPTY;
        }
    }

    void display_weekly_shipping_report()
    {
        cout << "\nWeekly Shipping Report\n";
        int total_shipped = 0;
        for (int day_index = 0; day_index < 7; day_index++)
        {
            cout << "Day " << day_index + 1 << " shipped: " << shipped_units_per_day[day_index] << endl;
            total_shipped += shipped_units_per_day[day_index];
        }
        cout << "Total shipped in week: " << total_shipped << endl;
        cout << "Total units currently in warehouse: " << total_units_in_warehouse << endl;
    }

    void find_best_shipping_day()
    {
        int best_day_index = 0;
        int max_shipped = shipped_units_per_day[0];

        for (int day_index = 1; day_index < 7; day_index++)
        {
            if (shipped_units_per_day[day_index] > max_shipped)
            {
                max_shipped = shipped_units_per_day[day_index];
                best_day_index = day_index;
            }
        }

        cout << "Best shipping day: Day " << best_day_index + 1
            << " (shipped " << max_shipped << " units)" << endl;
    }
};

int main()
{
    WarehouseSystem warehouse;
    warehouse.initialize_system();

    warehouse.display_shelf_map();

    warehouse.reserve_slot(0, 2);
    warehouse.add_stock(0, 2, 50);

    warehouse.add_stock(1, 1, 30);
    warehouse.add_stock(2, 4, 20);

    warehouse.ship_stock(0, 2, 10, 1);
    warehouse.ship_stock(1, 1, 15, 4);

    warehouse.display_shelf_map();
    warehouse.display_weekly_shipping_report();
    warehouse.find_best_shipping_day();

    return 0;
}