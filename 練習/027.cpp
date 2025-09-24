// 先判斷是否質數，如是質數再倒過來數字判斷是否也為質數
// 規則要求 倒過來的數字要不同 才算 emirp
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    while (cin >> N)
    {
        if (isPrime(N) == false)
        {
            cout << N << " is not prime.\n";
        }
        else
        {
            string s = to_string(N);
            reverse(s.begin(), s.end());
            int ans = stoi(s);
            if (N != ans && isPrime(ans) == true)
            {
                cout << N << " is emirp.\n";
            }
            else
            {
                cout << N << " is prime.\n";
            }
        }
    }
    return 0;
}