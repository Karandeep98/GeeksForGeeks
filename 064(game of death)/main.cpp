#include<iostream>
using namespace std;
int gameofdeath(int n,int k){
    if(n==1) return 1;
    return (gameofdeath(n-1,k)+k-1)%n+1;
}
int main()
 {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<gameofdeath(n,k)<<endl;
    }
	return 0;
}
