#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   getline(cin,s);

   for(int i=0;i<s.length();i++)
   {
       if(i==0) s[i]=toupper(s[i]);
       else if(s[i-1]==' ') s[i]=toupper(s[i]);
   }
   cout<<s;
    return 0;
}
