#include<bits/stdc++.h>
using namespace std;
//Recursive approach having exponential O(2^m) time complexity,where m is the no. of coins
/*int coinchange(vector<int> v,int m,int n){
    if(n==0) return 1;
    if(m==0 && n>=1) return 0;
    if(n<0) return 0;

    return coinchange(v,m-1,n)+coinchange(v,m,n-v[m-1]);
}
int main()
 {
	int t,m,n;
	cin>>t;
	while(t--){
	    cin>>m;
	    vector<int> v(m);
	    for(int i=0;i<m;i++){
	        cin>>v[i];
	    }
	    cin>>n;
	    cout<<coinchange(v,m,n)<<endl;
	}
	return 0;
}*/

int coinchange(int coins[],int m,int n){
    int v[m+1][n+1];
    for(int i=0;i<m;i++){
        v[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        v[0][i]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j>=coins[i-1])
                v[i][j]=v[i][j-coins[i-1]]+v[i-1][j];
            else
                v[i][j]=v[i-1][j];
        }
    }
    return v[m][n];
}
//Dynamic Programming solution having O(nm) complexity
int main()
 {
	int t,m,n;
	cin>>t;
	while(t--){
	    cin>>m;
	    int coins[m];
	    for(int i=0;i<m;i++){
	        cin>>coins[i];
	    }
	    cin>>n;
	    cout<<coinchange(coins,m,n)<<endl;
	}
	return 0;
}
