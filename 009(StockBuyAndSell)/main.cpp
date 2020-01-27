#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int buy=-1,sell=-1,flag=0;
        for(int i=0;i<n;i++)
        {
            if(buy == -1 )
            {
                if(i!=n-1)
                {
                    if(A[i]<A[i+1])
                    {
                        buy=i; cout<<"("<<buy<<" ";
                        flag=1;
                    }
                }
            }
            else
            {
                if(i==n-1)
                {
                    sell=i; buy=-1;
                    cout<<sell<<") ";
                }
                else if(A[i]>A[i+1])
                {
                    sell=i; buy=-1;
                    cout<<sell<<") ";
                }
            }

        }
        if(flag==0) cout<<"No Profit";
        cout<<endl;
    }
    return 0;
}
