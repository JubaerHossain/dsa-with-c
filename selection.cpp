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
                min_element = j; // 9
            }

        }
        if (min_element != i)
        {
            int temp = arr[min_element];
            arr[min_element] = arr[i];
            arr[i] = temp;
        }
        print(arr, n);
        cout << endl;
    }
    print(arr, n);
}
// best case time complexity is o(logn)
void solve2(int arr[], int n)
{
    sort(arr, arr + n);
    print(arr, n);
}

void max_sort(int arr[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        int max_element = i;
        for(int j = i+ 1; j <n; j++){
            if(arr[j] > arr[max_element]){
                max_element = j;
            }
        }
        if(arr[max_element] != i){
            temp = arr[max_element];
            arr[max_element] = arr[i];
            arr[i] = temp;
        }
    }
    print(arr, n);

}

int main()
{
    // find the minimum element in the array and swap it with the ith element
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    solve(arr, n);
    // using worst case O(n^2)
    cout << "max sort" << endl;
    max_sort(arr, n);
    return 0;
}