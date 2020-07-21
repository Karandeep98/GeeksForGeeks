#include<bits/stdc++.h>
using namespace std;
int main()
 {

	int t,n,value;
	cin>>t;
	while(t--){
	    cin>>n;
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>value;
	        value=abs(value);
	        mp[value]++;
	    }
	    cout<<mp.size()<<endl;
	}

	return 0;
}
