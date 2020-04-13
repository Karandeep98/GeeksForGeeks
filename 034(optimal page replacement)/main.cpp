#include <bits/stdc++.h>
using namespace std;
bool check(int n,int arr[],int f){
    for(int i=0;i<f;i++){
        if(arr[i]==n)  return true;
    }
    return false;
}

int predict(int pg[], int fr[], int pn, int index,int f)
{
    int res = -1, farthest = index;
    for (int i = 0; i < f; i++) {
        int j;
        for (j = index; j < pn; j++) {
            if (fr[i] == pg[j]) {
                if (j > farthest) {
                    farthest = j;
                    res = i;
                }
                break;
            }
        }
        if (j == pn)
            return i;
    }

    return (res == -1) ? 0 : res;
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

    for (int i = 0; i < n; i++) {

        if (!check(v[i], a,min(f,i))) {
            if (i >= f){
                int j = predict(v, a, n, i + 1,f);
                a[j] = v[i];
            }
            else a[i]=v[i];
            pagefault++;
        }
        else pagehit++;

    }
    cout << "No. of page faults = " << pagefault << endl;
    cout << "No. of Page hits = " << pagehit << endl;

    return 0;
}
