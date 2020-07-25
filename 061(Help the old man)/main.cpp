#include<iostream>
using namespace std;
int movenumber;
int count;
void toh(int n,int a,int b,int c){
    if(n>0){

        toh(n-1,a,c,b);
        count++;
        if(count==movenumber) {
            cout<<a<<" "<<c<<endl;
        }
        toh(n-1,b,a,c);
    }
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    count=0;
	    cin>>n>>movenumber;
	    toh(n,1,2,3);
	}
	return 0;
}
