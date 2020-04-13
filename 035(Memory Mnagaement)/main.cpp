#include <bits/stdc++.h>

using namespace std;
void firstfit(vector<int> mem,vector<int> pr,vector<int>& loc){
    for(int i=0;i<pr.size();i++){
        for(int j=0;j<mem.size();j++){
                if(mem[j]>=pr[i]){
                    loc[i]=j+1;
                    mem[j]-=pr[i];
                    break;
                }
        }
    }
}
void bestfit(vector<int> mem,vector<int> pr,vector<int>& loc){

    for(int i=0;i<pr.size();i++){
            int x=INT_MAX,index=-1;
        for(int j=0;j<mem.size();j++){
                if(mem[j]>=pr[i]){
                    if(x>mem[j]){
                       index=j+1;
                        x=mem[j];
                    }
                }
        }
        loc[i]=index;
        if(index!=-1) mem[index-1]-=pr[i];
    }
}
void worstfit(vector<int> mem,vector<int> pr,vector<int>& loc){

    for(int i=0;i<pr.size();i++){
            int x=INT_MIN,index=-1;
        for(int j=0;j<mem.size();j++){
                if(mem[j]>=pr[i]){
                    if(x<mem[j]){
                       index=j+1;
                        x=mem[j];
                    }
                }
        }
        loc[i]=index;
        if(index!=-1) mem[index-1]-=pr[i];

    }
}

int main()
{
    vector<int> mem{100, 500, 200, 300, 600};
    vector<int> pr{212, 417, 112, 426};
    vector<int> loc(pr.size(),-1);

    //firstfit(mem,pr,loc);
    //bestfit(mem,pr,loc);
    worstfit(mem,pr,loc);

    cout<<"Process number\t Process size \tAllocated Block No.";
    for(int i=0;i<pr.size();i++){
        cout<<"\n\t"<<i+1<<"\t\t"<<pr[i]<<"\t\t";
        if(loc[i]==-1) cout<<"Not Allocated";
        else cout<<loc[i];
    }
   return 0;
}
