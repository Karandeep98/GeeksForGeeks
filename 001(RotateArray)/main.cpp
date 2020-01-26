#include <iostream>

using namespace std;

int main()
{
    int t,n,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>d;
        int A[n];
        for(int j=0;j<n;j++){
            cin>>A[j];
        }
        for(int j=d;j<n;j++){
            cout<<A[j]<<" ";
        }
        for(int j=0;j<d;j++){
            cout<<A[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
