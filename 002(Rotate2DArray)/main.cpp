#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
   while(t>0)
    {
        cin>>n;
        int A[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>A[i][j];
            }

        }
        for(int j=0;j<n;j++)
        {
            for(int i=n-1;i>=0;i--)
            {

                cout<<A[i][j]<<" ";
            }
        }
        cout<<endl;
    t--;
   }
    return 0;
}
