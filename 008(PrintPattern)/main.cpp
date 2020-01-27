#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int num=n;
        cout<<n<<" ";
       while(n>0)
       {
           n-=5;
           cout<<n<<" ";
       }
       while(n<num)
       {
           n+=5;
           cout<<n<<" ";
       }
       cout<<endl;
    }

    return 0;
}
