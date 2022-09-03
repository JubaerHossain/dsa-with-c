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
        int sum;
        // array sum of all elements in array A that are less than length length L and greater than 0
       
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