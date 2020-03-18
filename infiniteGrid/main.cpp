#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<int> A{1,5,7};
   vector<int> B{2,4,9};
   int x,y,sum=0;
   for(int i=0;i<A.size()-1;i++){
        if(A[i]>A[i+1])
            x=A[i]-A[i+1];
        else
            x=A[i+1]-A[i];
        if(B[i]>B[i+1])
            y=B[i]-B[i+1];
        else
            y=B[i+1]-B[i];
    sum+=max(x,y);
   }
   cout<<sum;
    return 0;
}
