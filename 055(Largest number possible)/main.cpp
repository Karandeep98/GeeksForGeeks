#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n,s;
	cin>>t;
	while(t--){
	    string answer;
	    cin>>n>>s;
	    if((n*9)<s || s==0) answer="-1";
	      else
	    while(n>0){
	        if(s>9){
	           answer+= 9+'0';
	           s-=9;
	        }
	        else{
	            answer+=s+'0';
	            s=0;
	        }
	        n--;
	    }
	    cout<<answer<<endl;
	}

	return 0;
}
