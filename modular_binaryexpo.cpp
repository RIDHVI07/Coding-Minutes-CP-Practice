//sometimes it migth happen that the solution to a problem is having 
//large ans and we had to take mod with some given value
//this is the way to do the mod
#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

void power_num(int a,int b)
{
    int res = 1;
    while(b)
    {
        if(b & 1) //checking the bits which are set or not
         res *=a, res %= mod;  //if set then multiply the number a

         a *=a;a %= mod; //if not then just multiply
         b = b >> 1; //right shift is done to remove the bits one by one from the right hand side of a binary number
    }

    cout<<res;
}
int main()
{
    int a,b;

    cin>>a>>b;

    power_num(2,19);
}