#include<bits/stdc++.h>
using namespace std;
void shuffle(vector<int> v,int index,int n){
    if(index<n){
        cout<<v[index]<<" "<<v[index+n]<<" ";
        shuffle(v,index+1,n);
    }

}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    shuffle(v,0,n/2);
	    if(n%2!=0) cout<<v[n-1];
	    cout<<endl;
	}
	return 0;
}
