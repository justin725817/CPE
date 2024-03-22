#include <bits/stdc++.h>//萬能標頭檔
// #include<bitset>
using namespace std;

int main()
{

    int num; 
    cin >> num;
    while (num--)
    {
        int n; 
        cin >> n;
        bitset<16> x1(n); // 創立一個空間，並初始化(將n轉成二進位並儲存至x1)
        int count_x1 = x1.count(); // bitset內建函式，可以計算bitset裡總共有多少1
        int hex = 0; // 儲存16進位轉換成10進位的數
        // 16進制轉10進制
        for (int i = 0; n > 0; i++)
        {
            hex += (n % 10) * pow(16, i);
            n = n / 10;
        }
        bitset<16> x2(hex); // 初始化
        int count_x2 = x2.count(); // bitset內建函式，可以計算bitset裡總共有多少1
        cout << count_x1 << " " << count_x2 << endl;
    }
}