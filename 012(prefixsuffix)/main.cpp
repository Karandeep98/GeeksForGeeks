#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;string s;
	cin>>t;

	while(t--){
	    cin>>s;
	    int l=s.length();
	    int prefix=0;
	    for(int i=0;i<l-1;i++){
	        string x=s.substr(0,i+1);
	        string y=s.substr(l-i-1,l);
	        if(x==y){
	        prefix=i+1;
	        }
	    }
	   
	    cout<<prefix<<endl;
	}

	return 0;
}