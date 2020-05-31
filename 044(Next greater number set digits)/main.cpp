#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n;
   cin>>t;
   while(t--){

    cin>>n;
    string str=to_string(n);
    bool val=next_permutation(str.begin(),str.end());
    if(val==false)
    cout<<"not possible"<<endl;
    else cout<<str<<endl;
   }
    return 0;
}
