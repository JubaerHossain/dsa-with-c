#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findMinTime(int N, int arr[], int L)
    {

        // Your code goes here
        for (int i = 0; i < N; i++)
        {
            if (arr[i] == L)
            {
                return i;
            }
            
        }

        return -1;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key: ";
    cin >> key;
    Solution ob;
    int ans = ob.findMinTime(n, arr, key);
    cout << ans << endl;
    return 0;
}

// } Driver Code Ends