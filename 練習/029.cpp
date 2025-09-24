#include <bits/stdc++.h>
using namespace std;

string a, b;
int cnta[26], cntb[26];

int main()
{
    while (cin >> a >> b)
    {
        for (int i = 0; i < 26; i++)
        {
            cnta[i] = 0;
            cntb[i] = 0;
        }
        for (int i = 0; i < a.length(); i++)
        {
            cnta[a[i] - 'a']++;
        }
        for (int i = 0; i < b.length(); i++)
        {
            cntb[b[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = min(cnta[i], cntb[i]); j > 0; j--)
            {
                cout << (char)('a' + i);
            }
        }
        cout << "\n";
    }
}

//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string a, b;
//     while (cin >> a >> b)
//     {
//         vector<int> cnta(26, 0);
//         vector<int> cntb(26, 0);

//         for (char c : a)
//         {
//             cnta[c - 'a']++;
//         }
//         for (char c : b)
//         {
//             cntb[c - 'a']++;
//         }

//         for (int i = 0; i < 26; i++)
//         {
//             int common = min(cnta[i], cntb[i]);
//             for (int j = 0; j < common; j++)
//             {
//                 cout << char('a' + i);
//             }
//         }
//         cout << "\n";
//     }
// }