#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
   int ar[]={5,4,3,2,1,6,6,6,27};
   int n=sizeof(ar)/sizeof(ar[0]);
   sort(ar,ar+n);
   for(int i=0;i<n;i++){
    cout<<ar[i]<<"  ";
   }
   vector<int> v(ar,ar+n);
   cout<<*max_element(v.begin(),v.end())<<accumulate(v.begin(),v.end(),0)<<endl;
   cout<<count(v.begin(),v.end(),61);
    return 0;
}
