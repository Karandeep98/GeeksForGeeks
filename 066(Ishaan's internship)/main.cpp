#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t,n,k;
	cin>>t;

	while(t--){
	    cin>>n>>k;
	    //O(1) complexity
	    int maxpower=log(n)/log(k);
	    cout<<pow(k,maxpower)<<endl;
	    /*O(n*logn) complexity
	    vector<int> v;
	    for(int i=1;i<=n;i++){
            v.push_back(i);
	    }
	    while(n>k){
            for(int i=1;i<=n;i++){
                    int j=i/k;
                if(i%k!=0) v.erase(v.begin()+j);
            }
            //for(int x: v) cout<<x<<" ";
           // cout<<endl;
            n/=k;
	    }
	    if(n==k) cout<<v[k-1]<<endl;
	    else cout<<v[0]<<endl;*/
	}
	return 0;
}
