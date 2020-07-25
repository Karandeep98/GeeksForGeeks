#include <bits/stdc++.h>
using namespace std;
void print(string s,char str[],int i,int j,int n){


    if(i==n){
        str[j]='\0';
        cout<<str<<"$";
        return;
    }

    str[j]=s[i];
    print(s,str,i+1,j+1,n);
    str[j]=' ';
    str[j+1]=s[i];
    print(s,str,i+1,j+2,n);

}
void printspace(string s){
    int n=s.length();
    char str[2*n];
    str[0]=s[0];
    print(s,str,1,1,n);

}



int main()
{

    int t;string s;
    cin>>t;
    while(t--){
        cin>>s;
        printspace(s);
        cout<<endl;
    }

    return 0;
}
