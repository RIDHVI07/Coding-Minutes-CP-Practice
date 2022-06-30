#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    
    cin>>s;
    
    cout<<"{ }"<<endl;
    
    int n = s.length();
    int sub = (1 << n)-1;
    
    for(int i=1;i<=sub;i++)
    {
        int temp = i,j=0;
        
        while(temp > 0){
        
        if(temp & 1)
         cout<< s[j];
         j++;
         
         
         temp = temp >> 1;
        }
        
        cout<<endl;
         
         
    }
    

    return 0;
}