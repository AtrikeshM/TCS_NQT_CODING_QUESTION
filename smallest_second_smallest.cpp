//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends

vector<int> minAnd2ndMin(int a[], int n) {
    int small = INT_MAX;
    int second = INT_MAX;
    vector<int> v;
    
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]<small)
        {
            small = a[i];
        }
    }

    for(int i = 0;i<n;i++)
    {
        if(a[i]!=small && a[i]<=second)
        {
            second = a[i];
        }
    }
    
    bool flag = true;
    
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        v.push_back(-1);
        return v;
    }
    v.push_back(small);
    v.push_back(second);
    return v;
}