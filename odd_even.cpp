#include<iostream>

using namespace std;

//checking if number is odd or even using bit manipulation
int main(){
    int n;
    cin>>n;

    if(n&1){
        cout<<"Odd";
    }
    else{
        cout<<"even";
    }
}