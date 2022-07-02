//problem is
//given three numbers in range upto 2 to the power 15
//calculate (a*b)%c without exceeding the time limit and perform faster multiplication

#include<bits/stdc++.h>

using namespace std;

//const int mod = 1e9 + 7;

void mul(int a,int b,int c)
{
    int res = 0;
    while(b)
    {
        if(b & 1) //checking the bits which are set or not
         res +=a, res %= c;  //if set then multiply the number a

         a +=a;a %= c; //if not then just multiply
         b = b >> 1; //right shift is done to remove the bits one by one from the right hand side of a binary number
    }

    cout<<res;
}
int main()
{
    int a,b;

    mul(2,19,1e9 + 7);
}