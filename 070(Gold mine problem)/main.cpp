#include<bits/stdc++.h>
using namespace std;
int maxgold(vector<vector<int>> a,int n,int m){
    for(int i=m-1;i>=0;i--){
        for(int j=0;j<n;j++){
            int right = (i==m-1)? 0 : a[j][i+1];
            int rightTop = ((i==m-1)||(j==0))? 0 : a[j-1][i+1];
            int rightbottom =((i==m-1)||(j==n-1))? 0 : a[j+1][i+1];
            int maxvalue = max(right,max(rightTop,rightbottom));
            a[j][i]+=maxvalue;
        }
    }
    int maxval=0;
    for(int i=0;i<n;i++){
        maxval = max(maxval,a[i][0]);
    }
    return maxval;
}
void show(vector<vector<int>> v,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
 {
	int t,n,m,x;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    vector<vector<int>> a(n,vector<int> (m));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>a[i][j];
	        }
	    }
	    cout<<maxgold(a,n,m)<<endl;
	}
	return 0;
}
