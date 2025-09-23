#include <bits/stdc++.h>
using namespace std;

int a[55][55];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};


int main (){
    int row,col,R,C;
    int D,dR,dC;
    //目前方向
    char d;
    string s;
    bool lost=false;
    map<char,int>mp1;
    map<int,char>mp2;
    mp1['N']=0;mp2[0]='N';
    mp1['E']=1;mp2[1]='E';
    mp1['S']=2;mp2[2]='S';
    mp1['W']=3;mp2[3]='W';

    cin >>row>>col;
    while(cin>>R>>C>>d>>s){
        D=mp1[d];
        lost=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='F'){
                dR=R+dx[D];
                dC=C+dy[D];
                if(dR>=0&&dR<=row&&dC>=0&&dC<=col){
                    R=dR;
                    C=dC;
                }
                else{
                    if(a[R][C]==1){
                        continue;
                    }
                    else{
                        cout<<R<<" "<<C<<" "<<mp2[D]<<" LOST\n";
                        lost=true;
                        a[R][C]=1;
                        break;
                    }
                }
            }
            else if(s[i]=='R'){
                D=(D+1)%4;
            }
            else {
                D=(D-1+4)%4;
            }
        }
        if (!lost) cout << R << " " << C << " " << mp2[D] << "\n";
    }
    return 0;
}