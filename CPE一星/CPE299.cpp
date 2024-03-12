#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int L;
        cin >> L;
        vector<int> num;
        for (int j = 0; j < L; j++)
        {
            int tmp;
            cin >> tmp;
            num.push_back(tmp);
        }
        int k = 0;
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < L - 1; k++)
            {
                if (num[k] > num[k + 1])
                {
                    swap(num[k], num[k + 1]);
                    k++;
                }
            }
        }
        cout << "Optimal train swapping takes " << k << " swaps.\n";
    }
}