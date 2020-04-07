#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>k;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	  /* O(n^2) approach
	   for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]+a[j]==k) sum++;
	        }
	    }*/
	    //O(n) approach using hashing
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
            mp[a[i]]++;
	    }
	    for(int i=0;i<n;i++){
            count += mp[k-a[i]];

        if(a[i]==k-a[i]) count--; //To avoid cases if only one 3 is present during summing up for 6

	    }

	    cout<<"No. of pairs whose sum is equal to "<<k<<" are "<<count/2<<endl;
	}
	return 0;
}
