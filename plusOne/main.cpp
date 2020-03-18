#include <bits/stdc++.h>

using namespace std;
void checkZero(vector<int>&a,int i){
    if(a[i]==0){
        reverse(a.begin(),a.end());
        a.pop_back();
        reverse(a.begin(),a.end());
        checkZero(a,i);
    }
    else{}
    }
void increment(vector<int>&a,int i){
    if(i==-1){
        reverse(a.begin(),a.end());
        a.push_back(1);
        reverse(a.begin(),a.end());
    }
    else if(a[i]==9){
        a[i]=0;
        increment(a,i-1);
    }
    else a[i]++;
}
int main()
{
    vector<int> A{0,9,8,9};
    int i=A.size()-1,j=0;
         increment(A,i);
         checkZero(A,j);

    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
