#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
   vector<int> v{14, 5, 14, 34, 42, 63, 17, 25, 39, 61, 97, 55, 33, 96, 62, 32, 98, 77, 35};
   int b;
   cin>>b;
   while(b>v.size()){
    b-=v.size();
   }
   for (int i = 0; i < b; i++) {
		v.push_back(v[ i]);
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<b;i++){
        v.pop_back();
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
	}
    return 0;
}
