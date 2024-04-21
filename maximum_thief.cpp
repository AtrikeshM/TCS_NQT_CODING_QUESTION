//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        
        // int n = N;
        // int t = T;
        // multimap<int,int> m;
        // int temp[N];

        // for(int i=0;i<N;i++)
        // {
        //     temp[i] = B[i];
        // }

        // sort(temp,temp+N);
        // int s = 0;
        // int e = N-1;
        // while(s<e)
        // {
        //     swap(temp[s],temp[e]);
        //     s++;
        //     e--;
        // }

        // // for(int i=0;i<N;i++)
        // // {
        // //     cout<<temp[i]<<" ";
        // // }

        // for(int i=0;i<n;i++)
        // {
        //     m.insert({A[i],B[i]});
        // }

        // int ans = 0;
        
        // for(int i=0;i<N;i++)
        // {
        //     int a = temp[i];
        //     // cout<<"First sorted value"<<a<<endl;

        //     for(auto &p:m)
        //     {
        //         if(p.second == a)
        //         {
        //             int fst = p.first;
        //             if((t - fst )>=0)
        //             {
        //                 ans += (fst * a);
        //                 t = t - fst; 
        //             }
        //             else
        //             {
        //                 ans += (t*a);
        //                 t = 0;
        //             }
        //         }
        //     }
        // }
        // return ans;

        multimap<int,int> m;
         //A:- Gold Plates
         //B:- Gold Coins

        for(int i=0;i<N;i++)
        {
            m.insert({B[i], A[i]});// Gold coins and then Gold Plates
        }
        for(auto &itr:m)
        {
            cout<<itr.first<<" -> "<<itr.second<<endl;
        }

        int ans = 0;

        for(auto it = m.rbegin(); it != m.rend(); ++it)
        {
            int a = it->second; // Gold Plates
            cout<<"Gold Plates "<<a<<endl;
            int b = it->first;  // Gold Coins
            cout<<"Gold Coins "<<b<<endl;

            int take = min(T, a);
            ans += take * b;
            cout<<"Take "<<take<<" Ans "<<ans<<endl;
            T -= take;

            if(T == 0)
                break;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}
// } Driver Code Ends