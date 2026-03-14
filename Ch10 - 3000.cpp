#include <iostream>
using namespace std;

class QuizResult
{
private:
    int score;

public:
    void set_score(int new_score)
    {
        if (new_score >= 0 && new_score <= 100)
        {
            score = new_score;
        }
        else
        {
            cout << "Invalid score!" << endl;
        }
    }

    int get_score()
    {
        return score;
    }
};

int main()
{
    QuizResult quiz;

    int input_score;
    cin >> input_score;

    quiz.set_score(input_score);

    cout << "Final score: " << quiz.get_score() << endl;

    return 0;
}

//2

class EWallet
{
private:
    int balance;

public:
    void set_balance(int new_balance)
    {
        // TODO
    }

    int get_balance()
    {
        // TODO
        return 0;
    }

    void spend(int amount)
    {
        // TODO
    }
};

int main()
{
    EWallet wallet;

    int initial_balance;
    int spend_amount;

    cin >> initial_balance;
    cin >> spend_amount;

    // TODO: set initial balance
    // TODO: try spend
    // TODO: print final balance

    return 0;
}

//3

class EWallet
{
private:
    int balance;

public:
    EWallet()
    {
        balance = 0;
    }

    void set_balance(int new_balance)
    {
        if (new_balance >= 0)
        {
            balance = new_balance;
        }
        else
        {
            cout << "Invalid balance!" << endl;
        }
    }

    int get_balance()
    {
        return balance;
    }

    void spend(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Payment declined!" << endl;
        }
    }
};

int main()
{
    EWallet wallet;

    int initial_balance;
    int spend_amount;

    cin >> initial_balance;
    cin >> spend_amount;

    wallet.set_balance(initial_balance);
    wallet.spend(spend_amount);

    cout << "Final balance: " << wallet.get_balance() << endl;

    return 0;
}

//4

class Thermostat
{
private:
    int temperature;

public:
    Thermostat()
    {
        temperature = 24;
    }

    void set_temperature(int t)
    {
        if (t >= 16 && t <= 30)
        {
            temperature = t;
        }
        else
        {
            cout << "Invalid temperature!" << endl;
        }
    }

    int get_temperature()
    {
        return temperature;
    }
};

int main()
{
    Thermostat room;

    int new_temp;
    cin >> new_temp;

    room.set_temperature(new_temp);

    cout << "Current temperature: " << room.get_temperature() << endl;

    return 0;
}

//5

class LibraryBook
{
private:
    string book_title;
    int copies_available;

public:
    LibraryBook()
    {
        book_title = "C++ Basics";
        copies_available = 3;
    }

    void set_title(string new_title)
    {
        if (new_title.size() > 0)
        {
            book_title = new_title;
        }
    }

    string get_title()
    {
        return book_title;
    }

    int get_copies()
    {
        return copies_available;
    }

    void borrow_book()
    {
        if (copies_available > 0)
        {
            copies_available -= 1;
        }
        else
        {
            cout << "Not available!" << endl;
        }
    }
};

//6

class Trip
{
private:
    float distance_km;
    float rate_per_km;

public:
    Trip()
    {
        distance_km = 0;
        rate_per_km = 12.5f;
    }

    void set_distance_km(float dist)
    {
        if (dist >= 0)
        {
            distance_km = dist;
        }
        else
        {
            cout << "Invalid distance!" << endl;
        }
    }

    void set_rate_per_km(float rate)
    {
        if (rate > 0)
        {
            rate_per_km = rate;
        }
        else
        {
            cout << "Invalid rate!" << endl;
        }
    }

    float get_fare()
    {
        return distance_km * rate_per_km;
    }
};

//7 

#include <iostream>
using namespace std;

// // -----------------------
// // ENUM FOR SPOT STATUS
// // -----------------------
enum SpotStatus
{
    EMPTY,
    OCCUPIED,
    RESERVED
};

// // -----------------------
// // NORMAL FUNCTION: enum -> char
// // -----------------------
char status_to_char(SpotStatus s)
{
    if (s == EMPTY)
    {
        return 'E';
    }
    else if (s == OCCUPIED)
    {
        return 'O';
    }
    else
    {
        return 'R';
    }
}

// // -----------------------
// // NORMAL FUNCTION: Print garage map (2D array in function)
// // -----------------------
void print_garage_map(const SpotStatus garage[3][4])
{
    cout << "Garage Map:" << endl;

    for (int floor = 0; floor < 3; floor++)
    {
        for (int spot = 0; spot < 4; spot++)
        {
            cout << status_to_char(garage[floor][spot]) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// // -----------------------
// // NORMAL FUNCTION: Count empty spots (2D array in function)
// // -----------------------
int count_empty_spots(const SpotStatus garage[3][4])
{
    int empty_count = 0;

    for (int floor = 0; floor < 3; floor++)
    {
        for (int spot = 0; spot < 4; spot++)
        {
            if (garage[floor][spot] == EMPTY)
            {
                empty_count++;
            }
        }
    }
    return empty_count;
}

// // -----------------------
// // CLASS: ParkingGarage
// // -----------------------
class ParkingGarage
{
private:
    SpotStatus garage[3][4]; // 2D array
    int parked_count[3];     // 1D array

    bool is_valid_index(int floor, int spot)
    {
        return (floor >= 0 && floor < 3 && spot >= 0 && spot < 4);
    }

public:
    // Constructor: initialize garage
    ParkingGarage()
    {
        // Initialize all spots to EMPTY
        for (int floor = 0; floor < 3; floor++)
        {
            for (int spot = 0; spot < 4; spot++)
            {
                garage[floor][spot] = EMPTY;
            }
        }

        // Initialize parked counts to 0
        for (int floor = 0; floor < 3; floor++)
        {
            parked_count[floor] = 0;
        }

        // Default reserved spot
        garage[0][0] = RESERVED;
    }

    // setter-style function: safely change a spot status
    bool set_spot_status(int floor, int spot, SpotStatus new_status)
    {
        if (!is_valid_index(floor, spot))
        {
            cout << "Invalid location!" << endl;
            return false;
        }

        // Prevent changing default reserved spot
        if (floor == 0 && spot == 0)
        {
            cout << "Spot (0,0) is permanently reserved!" << endl;
            return false;
        }

        SpotStatus current_status = garage[floor][spot];

        // PARK operation (set to OCCUPIED)
        if (new_status == OCCUPIED)
        {
            if (current_status == EMPTY)
            {
                garage[floor][spot] = OCCUPIED;
                parked_count[floor]++;
                return true;
            }
            else
            {
                cout << "Cannot park here!" << endl;
                return false;
            }
        }

        // LEAVE operation (set to EMPTY)
        if (new_status == EMPTY)
        {
            if (current_status == OCCUPIED)
            {
                garage[floor][spot] = EMPTY;
                parked_count[floor]--;
                return true;
            }
            else
            {
                cout << "Cannot leave from here!" << endl;
                return false;
            }
        }

        // RESERVE operation (set to RESERVED)
        if (new_status == RESERVED)
        {
            if (current_status == EMPTY)
            {
                garage[floor][spot] = RESERVED;
                return true;
            }
            else
            {
                cout << "Cannot reserve here!" << endl;
                return false;
            }
        }

        return false;
    }

    // Getter-style function
    SpotStatus get_spot_status(int floor, int spot)
    {
        return garage[floor][spot];
    }

    // Getter for 1D array
    int get_parked_count(int floor)
    {
        if (floor < 0 || floor >= 3)
        {
            return 0;
        }
        return parked_count[floor];
    }

    // Simple: call normal function from inside class
    void print_map()
    {
        print_garage_map(garage);
    }

    // Simple: call normal function from inside class
    int total_empty_spots()
    {
        return count_empty_spots(garage);
    }
};

// // -----------------------
// // MAIN
// // -----------------------
int main()
{
    ParkingGarage garage_system;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char op;
        int floor, spot;

        cin >> op >> floor >> spot;

        if (op == 'P')
        {
            garage_system.set_spot_status(floor, spot, OCCUPIED);
        }
        else if (op == 'L')
        {
            garage_system.set_spot_status(floor, spot, EMPTY);
        }
        else if (op == 'R')
        {
            garage_system.set_spot_status(floor, spot, RESERVED);
        }
        else
        {
            cout << "Invalid operation!" << endl;
        }
    }

    // Print garage map (2D array used in normal function)
    garage_system.print_map();

    cout << "Parked Count Per Floor:" << endl;
    for (int floor = 0; floor < 3; floor++)
    {
        cout << "Floor " << floor << ": " << garage_system.get_parked_count(floor) << endl;
    }

    cout << endl;

    cout << "Total empty spots: " << garage_system.total_empty_spots() << endl;

    return 0;
}