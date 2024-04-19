//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        int temp[n];
        int total_sum = 0;
        for(int i = 0;i<n;i++)
        {
            total_sum += arr[i]; //9
        }
        int sum = arr[0];
        total_sum -= arr[0]; 
        cout<<sum<<endl;

        for(int i = 1;i<n;i++)
        {
            total_sum -= arr[i]; // 6
            if(sum == total_sum)
            {
                cout<<"Yes"<<" ";
                return "Yes";
            }
            sum += arr[i];
            
        }
        cout<<"No";
        return "No";

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        // cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends