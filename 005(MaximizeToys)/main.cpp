#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,j;
    cin>>t;
    while(t>0)
    {
        cin>>n>>k;
        int sum=0,A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        for(j=0;j<n;j++)
        {
            sum+=A[j];
            if(sum>k) break;
        }
        cout<<j<<endl;
        t--;
    }
    return 0;
}
