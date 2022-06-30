#include<bits/stdc++.h>

using namespace std;

int main(){

int arr[5]={1,2,3,6,10};
int k,x;
cin>>k>>x;
int n=5;
int left=0;
int right=n;
vector<int> V;
while(right-left>=k){
if(abs(arr[left]-x)>abs(arr[right]-x)) left++;
else right--;
}
while(left<=right){
V.push_back(arr[left]);
left++;
}

for(auto x:V){
    cout<<x<<" ";
}





}