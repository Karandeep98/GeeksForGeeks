#include <bits/stdc++.h>

using namespace std;
bool check(int n,int arr[],int f){
    for(int i=0;i<f;i++){
        if(arr[i]==n) return true;
    }
    return false;
}
int main()
{
    int n,f;
    cout<<"Enter frame size: ";
    cin>>f;
    cout<<"Enter no. of page references: ";
    cin>>n;
    cout<<"Enter page references: ";
    int v[n];
    int a[f];
    int pagefault=0;
    int pagehit=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int oldest=0;
    for(int i=0;i<n;i++){
        if(!check(v[i],a,min(f,i))){
           if(i>=f){
                a[oldest]=v[i];

                if(oldest==f-1) oldest=0;
                else oldest++;
           }
            else a[i]=v[i];

        pagefault++;
        }
        else pagehit++;
    }
    cout<<"\nNo. of page Faults = "<<pagefault;
    cout<<"\nNo. of page Hits = "<<pagehit;
    return 0;
}
