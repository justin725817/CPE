#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num1 = 1, num2 = 1;
    int carry; // 進位的加一
    int temp;  // 計算進位的次數
    while (cin >> num1 >> num2)
    {
        if (num1 == 0 && num2 == 0)
        {
            break;
        }
        carry = 0;
        temp = 0;
        while (num1 > 0 || num2 > 0)
        {
            if ((num1 % 10 + num2 % 10 + carry) >= 10)
            { // 進位
                temp++;
                carry++;
                num1 = num1 / 10;
                num2 = num2 / 10;
            }
            else if ((num1 % 10 + num2 % 10 + carry) < 10)
            {
                num1 = num1 /= 10;
                num2 = num2 /= 10;
            }
        }
        if (temp == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if (temp == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else if (temp > 1)
        {
            cout << temp << " carry operations." << endl;
        }
    }
}