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

void solve(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int min_element = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_element])
            {
                min_element = j;
            }
        }
        cout << "Minimum element is " << arr[min_element] << " at index " << min_element << endl;
        int temp = arr[min_element];
        arr[min_element] = arr[i];
        arr[i] = temp;
    }
    print(arr, n);
}
// best case time complexity is o(logn)
void solve2(int arr[], int n){
    sort(arr, arr+n);
    print(arr, n);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);
    // using worst case O(n^2)
    return 0;
}