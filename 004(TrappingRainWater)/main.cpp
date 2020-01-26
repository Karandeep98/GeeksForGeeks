#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t>0){
         cin>>n;
    int A[n],l,r,sum=0;
         for(int i=0;i<n;i++)
         {
             cin>>A[i];
         }
         for(int i=0;i<n;i++)
         {
             l=*max_element(A,A+i+1);
             r=*max_element(A+i,A+n);
             int volume = min(l,r)-A[i];
             if(volume>0) sum+=volume;
         }
            cout<<sum<<endl;
        t--;
    }

   /*int A[]={111,2352,33,66,55,22,1,153};
    cout<<*max_element(A+2,A+7)<<endl;
    //cout<<*min_element(A+7,A+8);*/
    return 0;
}
