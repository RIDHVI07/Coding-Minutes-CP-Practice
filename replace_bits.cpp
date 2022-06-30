#include<iostream>
using namespace std;
//you are given two 32 bit numbers N and M, and the two positions i and j,
// write a method to set all the bits between i and j in N equal to M
//M(become the substring of N locationed at and starting at j).

/*
Example:
N= 10000000000;
M=10101;
i=2,j=6
ouput - 1001010100
*/
void clearBitsInRange(int n,int i,int j){
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
   
}

void replace_bits(int n,int m,int i,int j){
    clearBitsInRange(n,i,j);

    int mask = (m<<i);
    n = n|mask;

}
int main(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    replace_bits(n,m,i,j);
    cout<<n;

}