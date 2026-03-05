// Ch8 - 3000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
		cout << "Order delivered. Enjoy your neal!";
		break;
	}

	return 0;
}

//Other practice problems are nearly identical.