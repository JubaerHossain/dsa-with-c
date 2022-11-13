#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) (a).begin(), (a).end()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a) * ((b) / gcd(a, b)))
#define point(a) fixed << setprecision(a)
#define uniq(a)   \
    sort(all(a)); \
    (a).erase(unique((a).begin(), (a).end()), (a).end())
#define tc       \
    int test;    \
    cin >> test; \
    while (test--)
using namespace std;

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

class Solution
{

public:
    void merge(int arr[], int l, int mid, int r)
    {
        int left = l;
        int middle = mid + 1;
        int start = l;
        int temp[1000];

        while (left <= mid && mid <= r)
        {
            if (arr[left] < arr[middle])
            {
                temp[start] = arr[left];
                left++;
            }
            else
            {
                temp[start] = arr[middle];
                middle++;
            }
            start++;
        }

        if (left > mid)
        {
            while (middle <= r)
            {
                temp[start] = arr[middle];
                middle++;
                start++;
            }
        }
        else
        {
            while (left <= mid)
            {
                temp[start] = arr[left];
                left++;
                start++;
            }
        }

        for (int i = l; i <= r; i++)
        {
            arr[i] = temp[i];
        }
    }

    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int mid = (l + r) / 2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            merge(arr, l, mid, r);
        }
    }
};
int main()
{
    Solution s;
    int arr[] = {55, 40, 53, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    s.mergeSort(arr, 0, n - 1);
    cout << "After sorting" << endl;
    print(arr, n);

    return 0;
}