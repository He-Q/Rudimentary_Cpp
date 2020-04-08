#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char letter = 0;
    //char letter_1 = a;

    cout << endl
        << "enter a letter: ";
        
    cin >> letter;
    cout << endl;

    if (isupper(letter))
    {
        cout << "You Entered a capital letter." << endl;
        cout << "Converting to lower case we get "
            << static_cast<char>(tolower(letter)) << endl;
        return 0;

    }

    if (islower(letter))
    {
        cout << "You Entered a small letter." << endl;
        cout << "Converting to upper case we get "
            << static_cast<char>(toupper(letter)) << endl;
        return 0;

    }
 
}
