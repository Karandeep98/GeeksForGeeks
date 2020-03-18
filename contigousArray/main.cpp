#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector{ 10, 2, 3, 4, 5 };
	myvector.push_back(6);
	//myvector.pop_back();
	for(int i=0;i<myvector.size();i++){
        cout<<myvector[i];
	}
	//for (auto it = myvector.begin(); it != myvector.end(); ++it)
	//	cout<<" "<< *it;

}
