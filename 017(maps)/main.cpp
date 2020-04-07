#include <bits/stdc++.h>

using namespace std;

int main()
{
   map<char,int> mp;
   string s="HelloWorld";
   int i=0;
   for(char ch: s){
    mp[ch]=i++;
   }
   for(auto it=mp.begin(); it!=mp.end();it++){
    cout<<it->first<<"\t"<<it->second<<endl;
   }
   if(mp.find('l')!=mp.end()) cout<<"key found"<<mp['l'];
    return 0;
}
