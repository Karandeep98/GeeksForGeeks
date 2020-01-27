#include <iostream>
#include<string>

using namespace std;

int main()
{
    int t,A[100];
    string str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int num=n;
        int i=0;
        while(n>0)
        {
            A[i]=n%62;
            i++;
            n/=62;
        }
        int size=i;
        for(int j=i-1;j>=0;j--)
        {
            cout<<str[A[j]];
        }
        cout<<endl<<num<<endl;
    }


    return 0;
}
