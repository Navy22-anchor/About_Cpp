#include <iostream>
using namespace std;

int main () {
    int pennies {0};
    int nickels {0};
    int dimes {0};
    int quarters {0};
    int dollars {0};
    double cents {0.0};

    cout << "Enter in ascending order of pennies, nickels, dimes, quarters, dollars, cents : ";

    cin >> pennies;
    cin >> nickels;
    cin >> dimes;
    cin >> quarters;
    cin >> dollars;
    cin >> cents;

    cout << "You have " << pennies << "pennies.\n"
        << "You have " << nickels << "nickels.\n"
        << "You have " << dimes << "dimes.\n"
        << "You have " << quarters << "quarters.\n"
        << "You have " << dollars << "dollars.\n"
        << "You have $" << cents/100 << "dollars.\n";
}