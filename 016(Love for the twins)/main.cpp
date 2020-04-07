
#include <bits/stdc++.h>
using namespace std;

int main() {
//code
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        map <int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>ar[i];
            mp[ar[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << '\t' << it->first
             << '\t' << it->second << '\n';
    }
        int count=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                    //cout<<it->second;
                count=count+(it->second)/2;
                }
        }
        cout<<(count*2)<<endl;

    }
    return 0;

}
