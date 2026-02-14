//1

#include <iostream>
using namespace std; 

void print_even(int marks[], int size); 

int main()
{
    int size = 5; 
    int marks[size] = { 10, 15, 20, 25, 30 };

    print_even(marks, 5);

    return 0; 
}

void print_even(int marks[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (marks[index] % 2 == 0)
        {
            cout << marks[index] << " ";
        }
    }
}

//2

#include <iostream>
using namespace std;

void replace_small(int numbers[], int size);

int main()
{
    int size = 5;
    int numbers[size] = { 5, 12, 8, 20, 3 };

    replace_small(numbers, size);

    return 0;
}

void replace_small(int numbers[], int size)
{
    for (int index = 0; index < size; index++)
    {
        for (int index = 0; index < size; index++)
        {
            if (numbers[index] < 10)
            {
                numbers[index] = 10; 
            }
            cout << numbers[index] << " ";
        }
    }
}

//Once again have already done all of these. I just forgot to upload chapter 1 and 2 originally

