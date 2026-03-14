#include <iostream>
#include <string>
using namespace std;

enum PowerState
{
    Off,
    On,
    Sleep
};

int main()
{
    PowerState device_state = Sleep;

    switch (device_state)
    {
    case Off:
        cout << "Device is turned off";
        break;
    case On:
        cout << "Device is running";
        break;
    case Sleep:
        cout << "Device is in power-saving mode";
        break;
    }

    return 0;
}

//2

enum OrderStatus
{
    Placed,
    Cooking,
    Ready,
    Delivered
};

int main()
{
    string user_input;
    OrderStatus current_status;

    cout << "Enter order status (Placed / Cooking / Ready / Delivered): ";
    cin >> user_input;

    if (user_input == "Placed")
        current_status = Placed;
    else if (user_input == "Cooking")
        current_status = Cooking;
    else if (user_input == "Ready")
        current_status = Ready;
    else if (user_input == "Delivered")
        current_status = Delivered;
    else
    {
        cout << "Invalid Input!";
        return 0;
    }

    switch (current_status)
    {
    case Placed:
        cout << "Order received. We will start soon!";
        break;
    case Cooking:
        cout << "Your food is being cooked. Please wait.";
        break;
    case Ready:
        cout << "Your food is ready. Please collect it!";
        break;
    case Delivered:
        cout << "Order delivered. Enjoy your meal!";
        break;
    }

    return 0;
}

//3

enum TransactionType
{
    Deposit,
    Withdraw,
    CheckBalance,
    Exit
};

int main()
{
    string user_input;
    TransactionType transaction;

    cout << "Enter transaction (Deposit / Withdraw / CheckBalance / Exit): ";
    cin >> user_input;

    if (user_input == "Deposit")
        transaction = Deposit;
    else if (user_input == "Withdraw")
        transaction = Withdraw;
    else if (user_input == "CheckBalance")
        transaction = CheckBalance;
    else if (user_input == "Exit")
        transaction = Exit;
    else
    {
        cout << "Invalid Input!";
        return 0;
    }

    switch (transaction)
    {
    case Deposit:
        cout << "Opening deposit process...";
        break;
    case Withdraw:
        cout << "Opening withdrawal process...";
        break;
    case CheckBalance:
        cout << "Displaying current balance...";
        break;
    case Exit:
        cout << "Thank you! Exiting ATM.";
        break;
    }

    return 0;
}

//4

enum HomeMode
{
    Home = 1,
    Away = 2,
    Night = 3,
    Vacation = 4
};

int main()
{
    int mode_input;

    cout << "Enter mode (1-Home, 2-Away, 3-Night, 4-Vacation): ";
    cin >> mode_input;

    if (mode_input < 1 || mode_input > 4)
    {
        cout << "Invalid Input!";
        return 0;
    }

    HomeMode current_mode = (HomeMode)mode_input;

    switch (current_mode)
    {
    case Home:
        cout << "Home Mode: Normal settings activated.";
        break;
    case Away:
        cout << "Away Mode: Security system armed.";
        break;
    case Night:
        cout << "Night Mode: Lights dimmed, doors locked.";
        break;
    case Vacation:
        cout << "Vacation Mode: Energy saving + security enabled.";
        break;
    }

    return 0;
}