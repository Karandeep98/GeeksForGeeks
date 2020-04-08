#include<bits/stdc++.h>
using namespace std;
int main()
 {

	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<string> v(n);

	    unordered_map<string,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	  sort(v[i].begin(),v[i].end());

	        mp[v[i]]++;
	    }
	    for(auto it=mp.begin();it!=mp.end();it++){
	        cout<<it->second<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
