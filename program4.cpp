#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout << "Enter any character: ";
    cin>>ch;

    // Alphabet checking condition 
    if ((ch >= 'a' && ch <= 'z') || (ch <= 'A' && ch <= 'Z'))
    {
        cout << ch << " = is an Alphabet :";   
    }
    else if (ch >= 'a' && ch <= '9') {
        cout << ch << " = is a Digit: ";   
    }
    else {
        cout << ch << "= is a Special Character: ";

    } 

}