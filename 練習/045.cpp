#include <bits/stdc++.h>
using namespace std;

string func(string num)
{
    int sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        sum += (num[i] - '0');
    }
    return to_string(sum);
}

int main()
{
    string num;
    while (cin >> num)
    {
        if (num == "0")
        {
            break;
        }
        do
        {
            num = func(num);
        } while (num.size() != 1);
        cout << num << "\n";
    }
    return 0;
}