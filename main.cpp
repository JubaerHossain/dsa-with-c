#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findMinTime(int N, vector<int> &A, int L)
    {

        // number series of 1 to N
        vector<int> num(N);
        for (int i = 0; i < N; i++)
            num[i] = i + 1;
            

       
    }
};

//{ Driver Code Starts.
int main()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    vector<int> arr(l);
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    int ans = ob.findMinTime(n, arr, l);
    cout << ans << endl;
    return 0;
}

// } Driver Code Ends