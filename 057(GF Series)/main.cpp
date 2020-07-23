#include<iostream>
using namespace std;
//O(2^n) using recursion
long long int printseries(long long int n){
   if(n==0) return 0;
   if(n==1) return 1;
   if(n>=2) return printseries(n-2)*printseries(n-2)-printseries(n-1);
}

int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cout<<printseries(i)<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
