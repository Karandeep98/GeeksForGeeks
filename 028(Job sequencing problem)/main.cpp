#include<bits/stdc++.h>
using namespace std;
struct job{
  int deadline;
  int profit;
  int id;
};
bool compare(job a, job b){
    return(a.profit>b.profit);
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	     job a[n];bool slot[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i].id;
	        cin>>a[i].deadline;
	        cin>>a[i].profit;
	        slot[i]=false;
	    }
	    sort(a,a+n,compare);

	    int count=0,sum=0;

	    for(int i=0;i<n;i++){
	        for(int j=min(n,a[i].deadline)-1;j>=0;j--){
	            if(slot[j]==false){
    	          //  cout<<a[i].id<<"->";
    	          slot[j]=true;
    	           count++;sum+=a[i].profit;
    	           break;
    	        }
    	    }
	    }
	    cout<<count<<" "<<sum<<endl;
	}

	return 0;
}
