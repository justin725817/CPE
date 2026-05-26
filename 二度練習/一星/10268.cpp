#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    while (cin >> x)
    {
        string s;
        cin.ignore();
        getline(cin, s);

        stringstream ss(s);
        long long coef;
        vector<long long> a;
        while (ss >> coef)
        {
            a.push_back(coef);
        }

        int n = a.size() - 1;

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long derivative_coef = a[i] * (n - i);
            ans = ans * x + derivative_coef;
        }

        cout << ans << "\n";
    }
    return 0;
}