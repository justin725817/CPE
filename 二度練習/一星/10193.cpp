#include <iostream>
#include <string>

using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int n;
    if (cin >> n)
    {
        for (int i = 1; i <= n; ++i)
        {
            string s1, s2;
            cin >> s1 >> s2;
            int n1 = stoi(s1, nullptr, 2);
            int n2 = stoi(s2, nullptr, 2);
            int result = gcd(n1, n2);
            cout << "Pair #" << i << ": ";
            if (result > 1)
            {
                cout << "All you need is love!\n";
            }
            else
            {
                cout << "Love is not all you need!\n";
            }
        }
    }
    return 0;
}