#include <bits/stdc++.h>

using namespace std;

void nature(float a,float b,float c){
if(a==0){
    cout<<"Not a Quadratic equation\n";
}
else{
    float d= (b*b)-(4*a*c);
    if(d==0) cout<<"Equal roots\n";
    else if(d>0) cout<<"Real Roots\n";
    else cout<<"Imaginary Roots\n";
}
}

int main()
{
    int t;
    float a,b,c;
    cout<<"Enter number of test cases:";
    cin>>t;
    while(t--){
        cout<<"Enter value of a:"; cin>>a;
        cout<<"Enter value of b:"; cin>>b;
        cout<<"Enter value of c:"; cin>>c;
        cout<<"Result:";
        nature(a,b,c);
    }


    return 0;
}
