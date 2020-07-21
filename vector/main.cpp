#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
            string a;cin>>a;
        v.push_back(a);
    }
     sort(v.begin(),v.end());
     for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
     }
return 0;
}
