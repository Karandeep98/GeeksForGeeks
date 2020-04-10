#include<bits/stdc++.h>
using namespace std;
int main()
 {
    double t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        double l=ceil(n/(k+1));
        int sum=0;
        for(int i=0;i<l;i++){
            sum+=v[i];
        }
        cout<<sum<<" ";
        sum=0;
        for(int i=n-1;i>=n-l;i--){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
	return 0;
}
