#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cin>>k;
        sort(A,A+n);
        cout<<A[k-1]<<endl;
         t--;
    }


    return 0;
}
