#include <iostream>
using namespace std;
int main()
{
    char str[30];
    cin>>str;
    cout <<str<<endl;
    cin.ignore(100,'\n');
    cin.get();
    return 0;
    
}