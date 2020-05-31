#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;


    while(t--){
        int counta=0,countb=0,sum=0;
        cin>>n>>x>>y;

        vector<int> a(n);
        vector<int> b(n);
        vector<int> diff(n);
        vector<int> index(n);
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            diff[i]=abs(a[i]-b[i]);
            index[i]=i;
        }

        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(diff[i],index[i]));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        for(int i=0;i<n;i++){
            int in=v[i].second;
                if(counta==x){
                    sum+=b[in];
                    countb++;
                }
                else if(countb==y){
                    sum+=a[in];
                    counta++;
                }
                else{
                if(a[in]>b[in]){
                    sum+=a[in];
                    counta++;
                }
                else{
                    sum+=b[in];
                    countb++;
                    }
                }
                cout<<"sum="<<sum<<endl;
        }
          cout<<sum<<endl;

    }

    return 0;
}
