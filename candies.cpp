#include<bits/stdc++.h>

using namespace std;

int main(){

int candies,num_people;

cin>>candies>>num_people;


 int j=1;
        vector<int>v(num_people);
        int i=0;
        while(candies>0){
            if(j>candies){
                j=candies;
            }
            if(i==num_people){
                i=0;
            }
            v[i]+=j;
            candies-=j;
            j++;
            i++;
        }
    
    for(auto x:v){
        cout<<x<<" ";
    }





}