#include<bits/stdc++.h>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;
};
bool comparator(meeting m1,meeting m2){
    return(m1.end<m2.end);
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    struct meeting meet[n];
	    for(int i=0;i<n;i++){
	        cin>>meet[i].start;
	    }
	    for(int i=0;i<n;i++){
	        cin>>meet[i].end;
	        meet[i].pos=i+1;
	    }

	    sort(meet,meet+n,comparator);
	    cout<<meet[0].pos<<" ";
	    int limit=meet[0].end;
	    for(int i=1;i<n;i++){

	        if(meet[i].start>=limit) {
	            cout<<meet[i].pos<<" ";
	            limit=meet[i].end;
	        }

	    }
	    cout<<endl;
	}
	return 0;
}
