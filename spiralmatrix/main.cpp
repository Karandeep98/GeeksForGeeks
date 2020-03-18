#include <iostream>

using namespace std;

int main()
{
   int A[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

   int n=4,m=4,dir=0;
   int t=0,b=n-1,l=0,r=m-1;
   while(t<=b&&l<=r){
    if(dir==0){
        for(int i=l;i<=r;i++){
            cout<<A[t][i]<<" ";
        }
        t++;dir=1;

    }
    else if(dir==1){
        for(int i=t;i<=b;i++){
            cout<<A[i][r]<<" ";
        }
        r--;dir=2;

    }
     else if(dir==2){
        for(int i=r;i>=l;i--){
            cout<<A[b][i]<<" ";
        }
        b--;dir=3;

    }
     else if(dir==3){
        for(int i=b;i>=t;i--){
            cout<<A[i][l]<<" ";
        }
        l++;dir=0;

    }
   }

    return 0;
}
