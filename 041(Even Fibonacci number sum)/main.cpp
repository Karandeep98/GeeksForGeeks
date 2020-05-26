#include<bits/stdc++.h>
using namespace std;
int main()
 {
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a=1,b=1,sum=2,total=0;
        if(n>2)
        {
            while(sum<=n){
                a=b;
                b=sum;
                if(sum%2==0) total+=sum;
                sum=a+b;
            }
        }
        cout<<total<<endl;
    }
	return 0;
}
