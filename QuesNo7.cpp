#include <iostream>
using namespace std;


int main()
{
    int number;

    cout << "Enter a 5-digit integer: ";
    cin >> number;

    if (number >= 10000 && number <= 99999)
    {

        int digit1 = number / 10000;
        int digit2 = (number / 1000) % 10;
        int digit3 = (number / 100) % 10;
        int digit4 = (number / 10) % 10;
        int digit5 = number % 10;

        cout << digit1 << "   " << digit2 << "   " << digit3 << "   " << digit4 << "   " << digit5 <<"." << endl;
    }
    
    else
    {
        cout << "Please enter a valid 5-digit integer." << endl;
    }

    return 0;
}
