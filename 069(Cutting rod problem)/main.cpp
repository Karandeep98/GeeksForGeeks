#include <bits/stdc++.h>

using namespace std;
//Recursive solution using O(2^len) complexity
/*int maxprofit(int price[],int len){
    if(len==0) return 0;
    int maxvalue=0;
    for(int i=0;i<len;i++){
        maxvalue=max(maxvalue,price[i]+maxprofit(price,len-i-1));
    }
    return maxvalue;
}*/
// Dynamic programming solution using O(len^2) complexity
int maxprofit(int price[],int len){
    int v[len+1];
    v[0]=0;
    int maxvalue=0;
    for(int i=1;i<=len;i++){
        for(int j=0;j<i;j++){
            maxvalue=max(maxvalue,price[j]+v[i-j-1]);
        }
        v[i]=maxvalue;
    }
    return v[len];
}
int main()
{
    int t,x,len;
    cin>>t;
    while(t--){
        cin>>x;
        int price[x];
        for(int i=0;i<x;i++){
            cin>>price[i];
        }
        cin>>len;
        cout<<maxprofit(price,len)<<endl;
    }

    return 0;
}
