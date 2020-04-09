#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}// } Driver Code Ends
// your task is to complete this function
int maxDistance(int arr[], int n)
{
//O(n^2 approach)
/*int max=0,x;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]) {
           x =j-i;
           if(x>max) max=x;
        }
    }
}
return max;*/
//O(n) approach using hashing
int max=0;
unordered_map<int,int>mp;
for(int i=0;i<n;i++) {
    if(mp.find(arr[i])==mp.end()) mp[arr[i]]=i;
    else if(max<(i-mp[arr[i]])) max=(i-mp[arr[i]]);
    }
return max;
}






