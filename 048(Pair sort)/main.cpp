#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector< pair<int,int>> v;
    vector<int> value(5);
    vector<int> index(5);
    for(int i=0;i<5;i++){
        cin>>value[i];
    }
    for(int i=0;i<5;i++){
        cin>>index[i];
    }
    for(int i=0;i<5;i++){
        v.push_back(make_pair(value[i],index[i]));
    }
    cout<<"vector before sorting:\n";
    for(int i=0;i<5;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<"vector after sorting:\n";
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<5;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    for(int i=index[0];i<index.size();i++){
        cout<<i<<" ";
    }
    return 0;
}
