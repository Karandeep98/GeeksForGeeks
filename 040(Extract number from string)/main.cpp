#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     int n=t;
     while(t>0){

    string s;
    if(t==n) cin.ignore();
    getline(cin,s);
    string x;
    bool status =true;
    long long int max=-1;
    string final;
    for(int i=0;i<s.length();i++){
            status=true;
        if(isdigit(s[i]))
        {
                x+=s[i];
                if(i==s.length()-1){
                        for(int i=0;i<x.length();i++){
                            if(x[i]=='9')
                                status=false;
                        }
                        if(status){
                            long long int a=0;
                            for(int i=0;i<x.length();i++)
                            a=a*10+x[i]-'0';
                            if(a>max) {
                                    max=a;
                            final =x;
                            }
                        }
                }
        }
        else
        {
            if(!x.empty()) {
                    for(int i=0;i<x.length();i++){
                            if(x[i]=='9')
                                status=false;
                        }
            if(status){
               long long int a=0;
                for(int i=0;i<x.length();i++)
                    a=a*10+x[i]-'0';
                if(a>max) {
                        max=a;
                        final=x;
                            }
                }
            }
            x="";
        }
    }
    if(max==-1) cout<<"-1"<<endl;
    else cout<<final<<endl;
    t--;
     }

	return 0;
}
