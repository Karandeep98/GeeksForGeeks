#include<iostream>
using namespace std;
int main()
 {
	int t,n,sum,flag;
	cin>>t;
	while(t--){
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	    }
	    cin>>sum;
	    flag=0;
	    for(int i=0;i<=n;i++){
	        if(A[i]<=sum){
	            
	            flag=1;
	        }
	    }
	    if(flag==0) cout<<"Empty";
	}
	return 0;
}