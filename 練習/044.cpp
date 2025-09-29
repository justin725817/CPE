#include <bits/stdc++.h>
using namespace std;

int N, M; // N 是數字的個數, M 是除數

// 自定義比較函數
bool customSort(int a, int b)
{
    // 規則 1: 根據 a % M 來排序
    int modA = a % M;
    int modB = b % M;

    if (modA != modB)
    {
        return modA < modB; // 根據餘數升序排列
    }

    // 規則 2: 如果餘數相同，奇數優先於偶數
    bool isOddA = a % 2 != 0;
    bool isOddB = b % 2 != 0;

    if (isOddA != isOddB)
    {
        return isOddA; // 奇數優先於偶數
    }

    // 規則 3: 如果餘數和奇偶性相同，奇數降序，偶數升序
    if (isOddA)
    {
        return a > b; // 奇數降序排列
    }
    else
    {
        return a < b; // 偶數升序排列
    }
}

int main()
{
    while (true)
    {
        cin >> N >> M;

        if (N == 0 && M == 0)
        {
            cout << "0 0" << endl;
            break; // 當輸入為 0 0，則結束
        }

        vector<int> numbers(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> numbers[i];
        }

        // 使用自定義的排序規則進行排序
        sort(numbers.begin(), numbers.end(), customSort);

        // 輸出結果
        cout << N << " " << M << endl;
        for (int num : numbers)
        {
            cout << num << endl;
        }
    }

    return 0;
}
