#include <bits/stdc++.h>
using namespace std;

int G(int N)
{
    int sum = 0;
    string newN = to_string(N);
    for (int i = 0; i < newN.size(); i++)
    {
        sum += newN[i] - '0';
    }
    if (sum >= 10)
    {
        return G(sum);
    }
    else
    {
        return sum;
    }
}

int main()
{
    int N;
    while (cin >> N && N != 0)
    {
        cout << G(N) << endl;
    }
    return 0;
}