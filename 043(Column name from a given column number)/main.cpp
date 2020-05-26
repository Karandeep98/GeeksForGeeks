#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
   cin>>t;
   while(t--){
    cin>>n;
    string s;
    int a;char ch;
    while(n>0){

        int m=n%26;
        n/=26;
        if(m==0) {
            a=26+64;
            n--;
        }
       else a=m+64;
        ch=a;
        s+= ch;

    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
   }

    return 0;
}
