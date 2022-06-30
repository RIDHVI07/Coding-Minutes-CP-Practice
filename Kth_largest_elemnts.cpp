// { Driver Code Starts
//sliding window approach
//geeks for geeks
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
         vector<int> ans(n);
    priority_queue<int, vector<int>, greater<int> > pq;

    for (int i = 0; i < n; i++) {
    
        if (pq.size() < k)
            pq.push(arr[i]);
        else {
            if (arr[i] > pq.top()) {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        if (pq.size() < k)
            ans[i] = -1;
        else
            ans[i] = pq.top();
    }
 
    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}