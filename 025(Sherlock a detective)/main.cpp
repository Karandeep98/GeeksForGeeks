#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;

	while(t--){
	    cin>>n;
	    int a[n],b[n+1];
	    unordered_map<int,bool> mp;

	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mp[a[i]]=true;
	    }
	    for(int i=1;i<n+1;i++){

	       if(!mp[i]) cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
