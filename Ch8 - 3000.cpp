// Ch8 - 3000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//1

//enum PowerState
//{
//	Off,
//	On,
//	Sleep
//};
//
//int main()
//{
//	PowerState device_state = Sleep; 
//
//	switch (device_state)
//	{
//	case Off:
//		cout << "Device Off.";
//		break;
//
//	case On:
//		cout << "Device On.";
//		break;
//
//	case Sleep:
//		cout << "Device Asleep.";
//		break;
//	}
//	
//	return 0;
//}

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

	cout << "Enter order status (Placed/Cooking/Ready/Delivered): ";
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
		cout << "Invalid Input";
		return 0;
	}

	switch (current_status)
	{
	case Placed:
		cout << "Order Recieved";
		break;
	case Cooking:
		cout << "Your order is being prepared";
		break;
	case Ready:
		cout << "Your order is ready";
	case Delivered: 
		cout << "Order delivered";
		break;
	}

	return 0; 

}
