#include <bits/stdc++.h>
using namespace std;

string printMinIndexChar(string, string);

// Driver program to test above
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    cout << printMinIndexChar(str, patt) << endl;
	}
	return 0;
}// } Driver Code Ends

// function to find the minimum index character
// str: string given in the input
// patt: given pattern
string printMinIndexChar(string str, string patt)
{
    //O(n^2 approach)
	/*string x;
	for(int i=0;i<str.length();i++){
	    for(int j=0;j<patt.length();j++){
	        if(str[i]==patt[j]){
	            x+=patt[j];
	            return x;
	        }
	    }
	}
	return "$";*/
	//O(n) approach using hashing
	unordered_map<char,bool> mp;
	for(int i=0;i<patt.length();i++){
	    mp[patt[i]]=true;
	}
	string x;
	for(int i=0;i<str.length();i++){
	    if(mp[str[i]]==true){
	        x+=str[i];
	        return x;
	    }
	}
	return "$";
}
