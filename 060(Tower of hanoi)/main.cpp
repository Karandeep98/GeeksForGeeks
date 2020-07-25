#include<iostream>
using namespace std;
int count=0;
void toh(int n,int a,int b,int c){
    if(n>0){
        count++;
        toh(n-1,a,c,b);
        cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    count=0;
	    cin>>n;
	    toh(n,1,2,3);
	    cout<<count<<endl;
	}
	return 0;
}
