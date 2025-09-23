#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int L;
        cin >> L;
        int a[L];
        int cnt = 0;
        for (int i = 0; i < L; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < L - 1; i++)
        {
            for (int j = i + 1; j < L; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                    cnt++;
                }
            }
        }
        cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
    }
    return 0;
}