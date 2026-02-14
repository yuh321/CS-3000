#include <iostream>
using namespace std; 

int main()

//1

{
	int size = 5;
	int distance[size];

	for (int index = 0; index < size; index++)
	{
		cin >> distance[index];
	}
	
	int first_reading = distance[0];
	int last_reading = distance[size - 1];

//2

	int size = 5;
	int pin[size];

	for (int index = 0; index < size; index++)
	{
		cin >> pin[index];
	}

	int third_attempt = pin[2];

//3

	int size = 5;
	int score[size];

	cout << "Enter the score: ";
	for (int index = 0; index < size; index++)
	{
		cin >> score[index];
	}

	cout << "Scores: ";
	for (int index = 0; index < size; index++)
	{
		cout << score[index] << " ";
 	}

//4

	int size = 5;
	int steps[size];

	cout << "Enter the steps counts: " << endl;
	for (int index = 0; index < size; index++)
	{
		cin >> steps[index];
	}

	cout << "Steps: ";
	for (int index = 0; index < size; index++)
	{
		cout << steps[index] << " ";
	}
	cout << endl;

	int total = 0; 
	for (int index = 0; index < size; index++)
	{
		total += steps[index];
	}

	cout << "Total: " << total << endl;

// Already done the other practices. Just doing this because I forgot to upload
}



