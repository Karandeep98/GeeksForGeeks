#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> a(n+1);
	   int k=1;
	   while(k<=n){
	       for(int i=k;i<=n;i+=k)
	       {
	           if(a[i]==0) a[i]=1;
	           else a[i]=0;
	       }
	       k++;
	   }
	    for(int i=1;i<=n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
