#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string x;
        while(n>0){
            if(n%2==0) x+='0';
            else x+='1';
            n/=2;
        }
        int gap=8-x.length();
        while(gap>0){
            x+='0';
            gap--;
        }
        reverse(x.begin(),x.end());
        string newx;
        for(int i=4;i<8;i++){
            newx+=x[i];
        }
        for(int i=0;i<4;i++){
            newx+=x[i];
        }

        int num=0;
        for(int i=7;i>=0;i--){
            if(newx[i]=='1') num+=pow(2,7-i);
        }
        cout<<num<<endl;
    }
    return 0;
}
