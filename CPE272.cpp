#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main (){

    string s ;
    cin >> s;
    int n;
    auto c_string = s.c_str();//
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '\"')
        {
            if (n % 2 == 0)
                cout << "``";
            else
                cout << "''";
            n++;
        }
        else
            cout << s[i];
    }
}
