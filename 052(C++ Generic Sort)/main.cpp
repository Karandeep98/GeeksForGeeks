#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,type;
    cin>>t;
    while(t--){

        cin>>n;
        cin>>type;
        //cout<<"t="<<t;

        if(type==1){

            vector<int> vint;
            int a;
            for(int i=0;i<n;i++){
                cin>>a;
                vint.push_back(a);
            }
            sort(vint.begin(),vint.end());
            for(int i=0;i<n;i++){
                cout<<vint[i]<<" ";
            }
        }
        else if(type==2){

            vector<string> vstring;
            string a;
            for(int i=0;i<n;i++){
                    cin>>a;
            vstring.push_back(a);
            }
            sort(vstring.begin(),vstring.end());
            for(int i=0;i<n;i++){
                cout<<vstring[i]<<" ";
            }
        }
        else if(type==3){

            vector<float> vfloat;
            float a;
            for(int i=0;i<n;i++){
                    cin>>a;
                vfloat.push_back(a);
            }
            sort(vfloat.begin(),vfloat.end());
            for(int i=0;i<n;i++){
                cout<<vfloat[i]<<" ";
            }
        }
        cout<<endl;

    }

    return 0;
}
