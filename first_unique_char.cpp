#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "Geeks for Geeks";

    map<char,int> m;

    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            continue;
        }
        else{
            m[s[i]]++;
        }
    }

    for(auto it=m.begin();it!=m.end();it++){
          if(it->second == 1){
              cout<<it->first;
          }
    }
}