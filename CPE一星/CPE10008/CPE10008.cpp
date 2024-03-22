#include <bits/stdc++.h>
using namespace std;
//先輸入次數，將各次字串合成轉成大寫，用數字判斷單字
int main(){
    int num;
    cin>>num;
    cin.clear();
    cin.sync();
    string lett[num]; //字串集合
    string textAll;
    for (int i=0;i<num;i++){
        string text; // 字串本身
        getline(cin,text);
        cin.clear();
        cin.sync();
        textAll+=text;
    }
    }

    //unfinish