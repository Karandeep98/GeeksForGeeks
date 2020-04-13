#include <bits/stdc++.h>

using namespace std;
bool check(int n,int arr[],int f){
    for(int i=0;i<f;i++){
        if(arr[i]==n) {

                return true;
        }
    }
    return false;
}
int mini(int lru[],int f){
    int x=lru[0],index=0;
    for(int i=1;i<f;i++){
        if(lru[i]<x) {
                x=lru[i]; index=i;
        }
    }
    return index;
}
int find(int n,int f,int a[]){
    for(int i=0;i<f;i++){
        if(a[i]==n) return i;
    }

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
    int lru[f];

    int pagefault=0;
    int pagehit=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(!check(v[i],a,min(i,f))){
            if(i>=f){
                int min=mini(lru,f);
                a[min]=v[i];
                lru[min]=i;

            }
            else {
                    a[i]=v[i];
                    lru[i]=i;
            }
             pagefault++;
        }
        else {
                pagehit++;
                lru[find(v[i],f,a)]=i;
        }

        /*cout<<"\nAt "<<v[i]<<"PF="<<pagefault<<"PH="<<pagehit;
        for(int i=0;i<f;i++){
            cout<<endl<<a[i]<<" ";
        }*/
    }


    cout<<"\nNo. of page Faults = "<<pagefault;
    cout<<"\nNo. of page Hits = "<<pagehit;
    return 0;
}
