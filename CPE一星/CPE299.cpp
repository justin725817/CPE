// HARD
#include <iostream>
#include <vector>
using namespace std;

int main (){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++){
        int L;
        cin >> L;
        vector<int> train;
        for (int j = 0; j < L; j++)
        {
            int v;
            cin >> v;
            train.push_back(v);
        }
        int k = 0;
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < L - 1; k++)
            {
                if (train[k] > train[k + 1])
                {
                    swap(train[k], train[k + 1]);
                    k++;
                }
            }
        }
        cout << "Optimal train swapping takes " << k << " swaps.\n";
    }
}