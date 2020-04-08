#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	string s="!#$%&*@^~";
	while(t--){
	    cin>>n;
	   char ch;
	    unordered_map<char,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>ch;
	        mp[ch]++;
	    }
	    for(int i=0;i<n;i++){
	        cin>>ch;
	        mp[ch]++;
	    }
	    for(int i=0;i<s.size();i++){
	        if(mp[s[i]]>1)
	        cout<<s[i]<<" ";
	    }
	    cout<<endl;
	   for(int i=0;i<s.size();i++){
	        if(mp[s[i]]>1)
	        cout<<s[i]<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
