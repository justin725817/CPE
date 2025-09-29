#include <iostream>
using namespace std;

int main()
{
    int T, s, d;
    cin >> T;
    while (T--)
    {
        cin >> s >> d;
        if ((s + d) % 2 || s < d)
            cout << "impossible\n";
        else
        {
            cout << (s + d) / 2 << " " << (s - d) / 2 << "\n";
        }
    }
    return 0;
}