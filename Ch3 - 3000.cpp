// Ch3 - 3000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std; 
//
//const int max_row = 3;
//const int max_col = 3; 
//
//void read_array(int marks[][max_col], int max_row);
//void print_array(int marks[][max_col], int max_row);
//
//int main()
//{
//	int marks[max_row][max_col];
//
//	read_array(marks, max_row);
//
//	print_array(marks, max_row);
//
//	return 0;
//}
//
//void read_array(int marks[][max_col], int max_row)
//{
//	for (int row = 0; row < max_row; row++)
//	{
//		for (int col = 0; col < max_col; col++)
//		{
//			cout << "Enter marks[" << row << "][" << col << "]: ";
//			cin >> marks[row][col];
//		}
//	}
//}
//
//void print_array(int marks[][max_col], int max_row)
//{
//	cout << "\nMarks array:\n";
//
//	for (int row = 0; row < max_row; row++)
//	{
//		for (int col = 0; col < max_col; col++)
//		{
//			cout << marks[row][col] << " ";
//		}
//		cout << endl; 
//	}
//}
//
////2
//
//int main()
//{
//	const int ROWS = 3;
//	const int COLS = 4; 
//	int seats[ROWS][COLS];
//
//	cout << "Enter roll numbers for a 3x4 seating chart:\n";
//
//	for (int row = 0; row < ROWS; row++)
//	{
//		for (int col = 0; col < COLS; col++)
//		{
//			cout << "Seats [" << row << "][" << col << "]: ";
//			cin >> seats[row][col];
//		}
//	}
//
//	cout << "\nSeating Chart:\n";
//	for (int row = 0; row < ROWS; row++)
//	{
//		for (int col = 0; col < COLS; col++)
//		{
//			cout << seats[row][col] << "\t"; 
//		}
//		cout << endl;
//	}
//
//	return 0; 
//}

//3

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	const int ROWS = 2;
//	const int COLS = 3;
//
//	int table_A[ROWS][COLS];
//	int table_B[ROWS][COLS];
//
//	cout << "Enter values for matrix A (2x3):\n";
//	for (int row = 0; row < ROWS; row++)
//	{
//		for (int col = 0; col < COLS; col++)
//		{
//			table_B[row][col] = table_A[row][col];
//		}
//	}
//
//	cout << "\nMatrix B (copy of A):\n";
//	for (int row = 0; row < ROWS; row++)
//	{
//		for (int col = 0; col < COLS; col++)
//		{
//			cout << table_B[row][col] << "\t";
//		}
//		cout << endl; 
//	}
//
//	return 0;
//}

//4

#include <iostream>
using namespace std;

const int max_row = 3; 
const int max_col = 4; 

void read_attendance(int attendance[][max_col], int max_row);
void print_attendance(int attendance[][max_col], int max_row);
void student_summary(int attendance[][max_col], int max_row);
void worst_day(int attendance[][max_col], int max_row);

int main()
{
	int attendance[max_row][max_col];
	
	read_attendance(attendance, max_row);
	print_attendance(attendance, max_row);
	student_summary(attendance, max_row);
	worst_day(attendance, max_row);

	return 0;
}

void read_attendance(int attendance[][max_col], int max_row)
{
	cout << "Enter attendance (1 = Present, 0 = Absent)\n";

	for (int row = 0; row < max_row; row++)
	{
		cout << "Student " << row + 1 << ":\n";
		for (int col = 0; col < max_col; col++)
		{
			cout << " Day " << col + 1 << ": ";
			cin >> attendance[row][col];
		}
	}
}

void print_attendance(int attendance[][max_col], int max_row)
{
	cout << "\nAttendance Table:\n";
	cout << "       Day1 Day2 Day3 Day4\n";

	for (int row = 0; row < max_row; row++)
	{
		cout << "Stu" << row + 1 << "     ";
		for (int col = 0; col < max_col; col++)
		{
			cout << attendance[row][col] << "    "; 
		}
		cout << endl;
	}
}

void student_summary(int attendance[][max_col], int max_row)
{
	cout << "\nStudent Summary:\n";

	for (int row = 0; row < max_row; row++)
	{
		int present = 0; 
		int absent = 0; 

		for (int col = 0; col < max_row; row++)
		{
			if (attendance[row][col] == 1)
				present++;
			else
				absent++;
		}

		cout << "Student " << row + 1 << ": Present = " << present
			<< ", Absent = " << absent << endl; 

		if (absent >= 2)
		{
			cout << "Warning: Student " << row + 1 << " has " << absent
				<< " absences!\n"; 
		}
	}
}

void worst_day(int attendance[][max_col], int max_row)
{
	int worst_day_index = 0;
	int max_absences = -1; 

	for (int col = 0; col < max_col; col++)
	{
		int absences_today = 0;

		for (int row = 0; row < max_row; row++)
		{
			if (attendance[row][col] == 0)
				absences_today++;
		}

		if (absences_today > max_absences)
		{
			max_absences = absences_today;
			worst_day_index = col;
		}
	}

	cout << "\nWorst attendance day = Day " << worst_day_index + 1
		<< " (" << max_absences << " absences)\n"
}

