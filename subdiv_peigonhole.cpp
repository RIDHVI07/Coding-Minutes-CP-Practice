#include<iostream>


#define ll long

ll a[1000005], pre[1000005]; //a can be negative
using namespace std;

int main()
{
       int t;
       cin>>t;

       while(t--)
       {
        int n;
        cin>>n;
       // memset(pre,0,sizeof(pre));

       pre[n]=0;


        pre[0] = 1;

        int sum = 0;
        for(int i = 0;i<n;i++)
        {
           cin>>a[i];
           sum += a[i];
           sum %= n;
           //sometimes the value can be negative
           sum = (sum+n)%n;
           pre[sum]++;
        }

        ll ans = 0 ;
        for(int i=0;i<n;i++)
        {
            ll m = pre[i];
            ans += (m)*(m-1)/2;
            
        }

        cout<<ans<<endl;
       }


}