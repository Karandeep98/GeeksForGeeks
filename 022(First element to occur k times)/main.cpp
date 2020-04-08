#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t,n,k;
    cin>>t;

    while(t--){
        unordered_map<int,int> mp;
        int flag=0;
        cin>>n;
        vector<int> v(n);
        cin>>k;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[v[i]]==k) {
                cout<<v[i];flag=1;
                break;
            }
        }

        if(flag==0) cout<<-1;
        cout<<endl;
    }
	return 0;
}
