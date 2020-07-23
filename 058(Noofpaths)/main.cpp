/*using recursion
#include<iostream>
using namespace std;
int noofpaths(int m,int n){
    if(m==1||n==1) return 1;
    else
    return noofpaths(m-1,n)+noofpaths(m,n-1);
}
int main()
 {
	int t,m,n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    cout<<noofpaths(m,n)<<endl;;
	}
	return 0;
}
*/
//using Dynamic Programming
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,m,n;
	cin>>t;
	//vector<vector<int> > v;
	while(t--){
	    cin>>m>>n;
	    vector<vector<int>> v(m,vector<int>(n));
	    for(int i=0;i<n;i++){
	        v[0][i]=1;
	    }
	    for(int i=0;i<m;i++){
	        v[i][0]=1;
	    }
	    for(int i=1;i<m;i++){
	        for(int j=1;j<n;j++){
	            v[i][j]=v[i-1][j]+v[i][j-1];
	        }
	    }
	    cout<<v[m-1][n-1]<<endl;
	}
	return 0;
}
