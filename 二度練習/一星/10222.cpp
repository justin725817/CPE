#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string keyboard = R("`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./");
    string input;
    while (getline(cin, input))
    {
        for (char c : input)
        {
            if (c == ' ')
            {
                cout << ' ';
            }
            else
            {
                char lower_c = tolower(c);
                size_t pos = keyboard.find(lower_c);
                if (pos != string::npos)
                {
                    cout << keyboard[pos - 2];
                }
            }
        }
        cout << "\n";
    }
    return 0;
}