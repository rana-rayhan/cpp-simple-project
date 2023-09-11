#include <iostream>
using namespace std;

int main()
{
     cout << "\t\tWelcome To Our Service\n\n";
     cout << "\t\tPress 1 For details\n\n";
     while (true)
     {
          int num;
          cin >> num;
          cin.clear();
          cin.ignore(123, '\n');
          if (num == 1)
          {
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;

               cout << "\t\tChoose a number\n\n";
               cout << "\t\tMain menu          -- 1\n";
               cout << "\t\tBook a flight      -- 2\n";
               cout << "\t\tFlight details     -- 3\n";
               cout << "\t\tCancel flight      -- 4\n\n";
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
          }
          else if (num == 2)
          {
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
               cout << "\t\tPlease enter your name\n\n";
               string fname;
               getline(cin, fname);

               cout << "\t\tPlease enter your email\n\n";
               string email;
               getline(cin, email);

               cout << "\t\tPlease enter your Number\n\n";
               int numf;
               cin >> numf;

               cout << "\t\tPlease enter your age\n\n";
               int age;
               cin >> age;
               // customer details----
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
               cout << "\t\tName         =   " << fname << endl;
               cout << "\t\tAge          =   " << age << endl;
               cout << "\t\tEmail        =   " << email << endl;
               cout << "\t\tNumber       =   " << numf << "\n";

               cout << "\t\tCongratulations Sir\n";
               cout << "\t\tYour flight is successfully booked\n";
               cout << "\t\tThank you for using our service\n";
               cout << "\t\tHappy journey :)\n";
               cout << "\t\tYou will receive the reservation confirmation in your email within an hour.\n\n\n";
               cout << "\t\tReturn to main menu -- 1\n\n";

               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
          }
          else if (num == 3)
          {
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
               cout << "\t\tInput 2 for booking\n\n";

               cout << "\tDhaka to London          -- 8 hours at 9pm\n";
               cout << "\tDhaka to Doha            -- 5 hours at 6am\n";
               cout << "\tHelsinki to Berlin       -- 2 hours at 4am\n";
               cout << "\tSaudi to London          -- 8 hours at 9pm\n";
               cout << "\tIraq to Doha             -- 5 hours at 6am\n";
               cout << "\tHelsinki to Berlin       -- 2 hours at 4am\n";
               cout << "\tDhaka to London          -- 8 hours at 9pm\n";
               cout << "\tSpain to Doha            -- 5 hours at 6am\n";
               cout << "\tHelsinki to Berlin       -- 2 hours at 4am\n";
               cout << "\tKanchan to London        -- 8 hours at 9pm\n";
               cout << "\tKolatoli :) to Doha      -- 5 hours at 6am\n";
               cout << "\tVantaa to Berlin         -- 2 hours at 4am\n\n";
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
          }
          else if (num == 4)
          {
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
               cout << "\t\tYour ticket is successfully cancelled\n";
               cout << "\t\tYou will receive a confirmation within 1 hour";
               cout << "\t\tWelcome again :)" << endl
                    << endl;
               cout << ">>>>>>----------------------------------------------<<<<<<" << endl
                    << endl
                    << endl;
          }
          else
          {
               cout << "Wrong digit please input between 1-4 only\n\n";
          }
     }
     return 0;
}