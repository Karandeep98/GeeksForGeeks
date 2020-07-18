#include <bits/stdc++.h>

using namespace std;
string caseSort(string s,int n){
    int i=0;
     vector<int> lower;
     vector<int> upper;
     string lwrstr,uprstr;
    while(i<s.length()){
        if(islower(s[i])) {
                lower.push_back(i);
                lwrstr+=s[i];
        }
        else {
                upper.push_back(i);
                uprstr+=s[i];
        }
        i++;
    }
    sort(lwrstr.begin(),lwrstr.end());
    sort(uprstr.begin(),uprstr.end());

   for(int j=0;j<lower.size();j++){
    s[lower[j]]=lwrstr[j];
   }
   for(int j=0;j<upper.size();j++){
    s[upper[j]]=uprstr[j];
   }

    return s;
}
int main()
{
    /*char ch;
    cin>>ch;
    if(islower(ch)) cout<<"lower";
    else cout<<"upper";*/
   int t;
   cin>>t;
   while(t--){
        int n;
    cin>>n;
   string s;
   cin>>s;
   cout<<caseSort(s,n)<<endl;


   }
    return 0;
}
