#include <bits/stdc++.h>

using namespace std;
class Student{
private:
    string first_name;
    string last_name;
public:
    void setname(string a,string b){
    first_name=a;
    last_name=b;
    }
    friend void check_name(Student a);
};
//O(n^2)
/*void check_name(Student a){
    //cout<<a.first_name<<a.first_name.length()<<"\n"<<a.last_name<<a.last_name.length();
    bool status=true;
    for(int i=0;i<a.last_name.length();i++){
        if(a.first_name.find(a.last_name[i])==string::npos)
            {
                status=false;break;
            }
    }
    if(!status) cout<<"NOT ANAGRAM\n";
    else {
        for(int i=0;i<a.first_name.length();i++){
        if(a.last_name.find(a.first_name[i])==string::npos)
            {
                status=false;break;
            }
    }
      if(!status) cout<<"NOT ANAGRAM\n";
      else
    cout<<"ANAGRAM";
    }
}*/
//O(n*logn)
/*void check_name(Student a){
sort(a.first_name.begin(),a.first_name.end());
sort(a.last_name.begin(),a.last_name.end());

    if(a.first_name==a.last_name) cout<<"ANAGRAM\n";
    else cout<<"NOT ANAGRAM\n";
}*/
//O(n)
void check_name(Student a){
unordered_map<char,bool> mp;
bool status=true;
if(a.first_name.length()!=a.last_name.length()) cout<<"NOT ANAGRAM\n";
else{
    for(int i=0;i<a.first_name.length();i++){
        mp[a.first_name[i]]=true;
    }
    for(int i=0;i<a.last_name.length();i++){
        if(!mp[a.last_name[i]]){
                status=false;
            break;
        }
    }
    if(!status) cout<<"NOT ANAGRAM\n";
    else cout<<"ANAGRAM\n";
}
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string f,l;
        cin>>f>>l;
        Student s;
        s.setname(f,l);
        check_name(s);
    }
    return 0;
}
