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
    for(int i=0;i<f;i++){
        a[i]=v[i];
    }
    if(n>=f) pagefault=f;
    else pagefault=n;
    int oldest=0;
    for(int i=f;i<n;i++){
        if(!check(v[i],a,f)){

            a[oldest]=v[i];
            pagefault++;
            if(oldest==f-1) oldest=0;
            else oldest++;
        }
        else pagehit++;
    }
    cout<<"\nNo. of page Faults = "<<pagefault;
    cout<<"\nNo. of page Hits = "<<pagehit;
    return 0;
}
