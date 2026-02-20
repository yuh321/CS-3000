// Ch4 - 3000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{
    char text[200];
    cin.getline(text, 200);

    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }

    int left_index = 0;
    int right_index = length - 1;

    while (left_index < right_index)
    {
        char temp = text[left_index];
        text[left_index] = text[right_index];
        text[right_index] = temp;

        left_index++;
        right_index--;
    }

    cout << text << endl;
    return 0;
}

//2

int main()
{
    char input_sentence[200];
    cin.getline(input_sentence, 200);

    for (int character_index = 0; input_sentence[character_index] != '\0'; character_index++)
    {
        if (input_sentence[character_index] == ' ')
        {
            input_sentence[character_index] = '-';
        }
    }

    cout << input_sentence << endl;
    return 0; 
}

//3

int main()
{
    char input_word[200];
    cin >> input_word;

    for (int character_index = 0; input_word[character_index] != '\0'; )
    {
        char current_character = input_word[character_index];
        int repeat_count = 0;

        while (input_word[character_index] == current_character)
        {
            repeat_count++;
            character_index++;
        }
        
        cout << current_character << repeat_count;
    }

    cout << endl;
    return 0; 
}




