#include <bits/stdc++.h>
using namespace std;

string decodePattern(string s){
    int i=0;
    string x;
    unordered_map<char,int> mp;
    for(char ch: s){
        if(mp.find(ch)==mp.end())
            mp[ch]=i++;

        x+=to_string(mp[ch]);
    }

   return x;
}

vector<string> findMatchedWords(vector<string> dict,string pattern){
                     int len=pattern.length();
                     string hash=decodePattern(pattern);
                     vector<string> v;

                     for(string s: dict){
                        if(s.length()==len && decodePattern(s)==hash){
                            v.push_back(s);
                        }
                     }
                     return v;
            }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		cin>>s[i];
		string tt;
		cin>>tt;
		vector<string> res = findMatchedWords(s,tt);
  sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
		cout<<endl;

	}
}
