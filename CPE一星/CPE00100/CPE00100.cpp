#include <iostream> 
using namespace std;
int cycle_length(int n)
{
    int k = 0;
    // cout << n << endl;
    for (;;)
    {
        if (n == 1)
        {
            k = k + 1;
            break;
        }
        if (n % 2 == 1)
        {
            n = 3 * n + 1;
            k = k + 1;
            // cout << n << endl;
        }
        else
        {
            n = n / 2;
            k = k + 1;
            // cout << n << endl;
        }
    }
    return k;
}
int main()
{
    int i, j;
    int max = 0;
    cin >> i >> j;
    if (i >= j)
    {
        for (int a = j; a <= i; a++)
        {

            if (cycle_length(a) > max)
            {
                max = cycle_length(a);
            }
        }
    }
    if (i < j)
    {
        for (int a = i; a <= j; a++)
        {
            if (cycle_length(a) > max)
            {
                max = cycle_length(a);
            }
        }
    }
    cout << i << " " << j << " " << max << endl;
}