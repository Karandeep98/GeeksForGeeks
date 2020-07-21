#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_map<char,int> mp;
    for(char a='a';a<='z';a++){
        mp[a]=0;
    }
    string s;
    cin>>s;

    vector<int> v(26);
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(char a='a';a<='z';a++){
        int count=mp[a];
        while(count>0){
             cout<<a;
             count--;
        }
    }

    return 0;
}
