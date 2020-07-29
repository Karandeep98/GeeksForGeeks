#include <bits/stdc++.h>
using namespace std;
// Recursive approach having O(2^n) complexity
bool is_sub_set(vector<int> v,int n,int sum){
    if(sum==0) return true;
    if(n==0 && sum!=0) return false;
    if(v[n-1]>sum) return is_sub_set(v,n-1,sum);
    return is_sub_set(v,n-1,sum)||is_sub_set(v,n-1,sum-v[n-1]);
}

int main()
{
    int t,n,sum;
    cin>>t; //No. of testcases
    while(t--){
        cin>>n; //size of array
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];  //elements of array
        }
        cin>>sum; //sum to be checked
      /* uncomment this while doing recursive approach
        if(is_sub_set(v,n,sum)) cout<<"Found a subset with given sum\n";
        else cout<<"No subset found with given sum\n";*/
        //Dynamic programming approach having O(n*sum) complexity
        bool a[n+1][sum+1];
        for(int i=0;i<=n;i++){
            a[i][0]=true;
        }
        for(int i=1;i<=sum;i++){
            a[0][i]=false;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(v[i-1]>j) a[i][j]=a[i-1][j];
                else
                    a[i][j]=a[i-1][j]||a[i-1][j-v[i-1]];
            }
        }
        /*Un comment this code to print the table
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        if(a[n][sum]) cout<<"Found a subset with given sum\n";
         else cout<<"No subset found with given sum\n";
    }
    return 0;
}
