#include <bits/stdc++.h>
using namespace std;

int get_ones_count(int num)
{
    if (num == 0)
        return 0;
    string b_str = "";
    while (num > 0)
    {
        b_str += to_string(num % 2);
        num /= 2;
    }
    int count = 0;
    for (int i = 0; i < b_str.size(); i++)
    {
        if (b_str[i] == '1')
        {
            count++;
        }
    }
    return count;
}

void Encryption(int N)
{

    int count_x1 = get_ones_count(N);
    int count_x2 = 0;
    int temp = N;
    while (temp > 0)
    {
        int digit = temp % 10;
        count_x2 += get_ones_count(digit);
        temp /= 10;
    }

    cout << count_x1 << " " << count_x2 << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Encryption(N);
    }
    return 0;
}