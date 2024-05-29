#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    while (getline(cin, num))
    {
        int asc[256]={0},max=0;
        for (int i = 0; i < num.length(); i++)
        {
            asc[num[i]]++;
            if (asc[num[i]] > max)
            {
                max = asc[num[i]];
            }
        }
        for(int i=1;i<=max;i++){
            int count=0;
            for(int j=0;j<256;j++){
                if(asc[j]==i){
                    count++;
                }
                
            }
            for (int j = 127; j >= 0; j--)
            {
                if (asc[j] == i)
                    cout << j << " " << asc[j] << endl;
            }
        }
    }
}