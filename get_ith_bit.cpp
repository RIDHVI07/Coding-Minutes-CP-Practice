#include<iostream>

using namespace std;

//finding the ith bit of the number acc to its position from right to left
int getithbit(int n,int i){
   int mask = 1<<i;
   return (n & mask) > 0 ? 1 : 0;

}

void setithbit(int &n , int i){
    int mask = 1<<i;
    n = (mask|n);
   
}

void clearithbit(int &n, int i){
   int mask = ~ (1<<i);
   n = n & mask;
 
}

void updateithbit(int &n,int i,int v){
    clearithbit(n,i);
    int mask = (v<<i);
    n = n|mask;
}

void clearlastIbit(int &n,int i){
    int mask = (-1<<i);
    n = n & mask;
}

void clearBitsInRange(int n,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
    cout<<n;
}

int main(){
    // int n,i;
    // cin>> n;

    // cout<<"enter the position of the bit "<<endl;
    // cin>>i;

   // cout << getithbit(n,i);
   //setithbit(n,i);
   //clearithbit(n,i);
   //updateithbit(n,i,1);
  // clearlastIbit(n,i);
  clearBitsInRange(31,1,3);

   
}