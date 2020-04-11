#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[]={1,2,5,10,20,50,100,200,500,2000};
	    int i=9;
	    while(n>0){
	        if(n>=a[i]){
	            cout<<a[i]<<" ";
	            n-=a[i];
	        }
	        else i--;
	    }
	    cout<<endl;
	}
	return 0;
}
