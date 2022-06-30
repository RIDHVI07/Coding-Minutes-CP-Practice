#include<bits/stdc++.h>

using namespace std;


//for 2n+1 number 
//means for single unique elements
int unique_num(vector<int> v){ 
    int XOR = 0;

    for(int i=0;i<v.size();i++){
        XOR =XOR ^ v[i];
    }

    return XOR;

}



int main(){
  
    int n;
    cin>>n;

    vector <int> v(n);

      for(int i=0;i<n;i++){
          int a;
          cin>>a;
          v.push_back(a);
      }

      int result = unique_num(v);
      cout<<result;
}