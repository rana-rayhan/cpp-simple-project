#include <iostream>

using namespace std;

int main()
{
    int max_parking_slots, available_parking_slots = 0;
    cout << "Enter the maximum number of parking slots: ";
    cin >> max_parking_slots;
    cout << endl;

    while (true)
    {
        cout << "Enter 1 to park a car" << endl;
        cout << "Enter 2 to exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            if (available_parking_slots == max_parking_slots)
            {
                cout << "Sorry, the parking lot is full." << endl;
            }
            else
            {
                cout << "Car parked successfully." << endl;
                available_parking_slots++;
            }
        }
        else if (choice == 2)
        {
            cout << "Car exit successfully." << endl;
            available_parking_slots--;
        }
        else
        {
            cout << "Invalid choice. Try again." << endl;
        }
        cout << endl;
    }

    return 0;
}
