#include<bits/stdc++.h>
using namespace std;
set<string> set1;
void permute(string s,int l,int r){
    for(int i=l;i<=r;i++){
        swap(s[l],s[i]);
        permute(s,l+1,r);
        set1.insert(s);
        //cout<<s<<" ";
        swap(s[l],s[i]);
    }
}
int main()
 {
    int t;string s;
    cin>>t;
    while(t--){
        set1.clear();
        cin>>s;
        permute(s,0,s.length()-1);
        //cout<<endl;
       for(string a:set1){
        cout<<a<<" ";
       }
       cout<<endl;
    }
	return 0;
}
