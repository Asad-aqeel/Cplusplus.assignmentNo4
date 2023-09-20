#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int sum = num1 + num2 + num3;

    double average = static_cast<double>(sum) / 3;

    int product = num1 * num2 * num3;

    int smallest = num1;

    if (num2 < smallest)
    {
        smallest = num2;
    }

    if (num3 < smallest)
    {
        smallest = num3;
    }

    int largest = num1;

    if (num2 > largest)
    {
        largest = num2;
    }

    if (num3 > largest)
    {
        largest = num3;
    }

    cout << "Sum is " << sum << "." << endl;
    cout << "Average is " << average << "." << endl;
    cout << "Product is " << product << "." << endl;
    cout << "Smallest is " << smallest << "." << endl;
    cout << "Largest is " << largest << "." << endl;

    return 0;
}
