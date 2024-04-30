#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password,newname;
    string lastpassword[1];
    string  name[1];

    cout << "Enter your last password: ";
    cin >> lastpassword[0];

    cout << "Enter new password: ";
    cin >> password;

    if (lastpassword[0] != password)
    {
        cout << "This is your new password " << password <<"." <<endl;
    }

    else
    {
        cout << "Type a new password first then login in to your pc."<<endl;
    }

    cout << "Enter your old pc name: "<<endl;
    cin >> name[0];

    cout << "Enter new pc name: "<<endl;
    cin >> newname;

    if (name[0] != newname)
    {
        cout << "Welcome to your new pc "  << newname <<"." <<endl;
    }

    else
    {
        cout << "Sorry this is not your pc. ";
    }

    return 0;
}
