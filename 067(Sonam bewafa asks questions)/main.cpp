#include<bits/stdc++.h>
using namespace std;
int main()
 {
	long long int t,n,q,low,high,rank;
	cin>>t;
	while(t--){
	    cin>>n>>q;
	    vector<long long int> final;
	    for(long long int i=0;i<n;i++){
	         cin>>low>>high;
	         for(long long int j=low;j<=high;j++){
	             final.push_back(j);
	         }
	    }
	    for(long long int i=0;i<q;i++){
	        cin>>rank;
	        cout<<final[rank-1]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
