#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n],D[n],p=1;
        for(int i=0;i<n;i++)
            cin>>A[i];
        for(int i=0;i<n;i++)
            cin>>D[i];
        for(int i=0;i<n-1;i++)
        {
            if(A[i+1]>=D[i]){}
            else
            {
                int x=i-1;
                while(x>=0)
                {
                    if(A[i+1]>=D[x]){}
                    else p++;
                    x--;
                }
            }
            cout<<"i="<<i<<" p="<<p<<endl;
        }
        cout<<p<<endl;
    }

    return 0;
}
