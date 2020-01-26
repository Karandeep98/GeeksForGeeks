#include <bits/stdc++.h>

bool check(int A[],int c,int element)
{
    for(int i=0;i<c;i++)
    {
        if(A[i]==element) return true;
    }
    return false;
}
using namespace std;

int main()
{
    int t,capacity,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int A[n],page=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cin>>capacity;
        if(capacity>n){
            page=n;
        }
        else
        {   int counter=0;
            page=capacity;
            for(int i=capacity;i<n;i++)
            {
                if(check(A,capacity,A[i])){}

                else
                {
                    swap(A[i],A[counter]);
                    if(counter==capacity-1) counter=0;
                    else counter++;
                    page++;
                }

            }

        }
        cout<<page<<endl;
        t--;
    }


    return 0;
}
