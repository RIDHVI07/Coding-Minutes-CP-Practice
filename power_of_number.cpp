//to find the exponential without using the pow function using the binary exponential
//time complexity is  O(log b)

#include<bits/stdc++.h>

using namespace std;

void power_num(int a,int b)
{
    int res = 1;
    while(b)
    {
        if(b & 1) //checking the bits which are set or not
         res *=a;  //if set then multiply the number a

         a *=a; //if not then just multiply
         b = b >> 1; //right shift is done to remove the bits one by one from the right hand side of a binary number
    }

    cout<<res;
}
int main()
{
    int a,b;

    cin>>a>>b;

    power_num(a,b);
}