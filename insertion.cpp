#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define maxe *max_element
#define mine *min_element
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) (a).begin(),(a).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define point(a) fixed<<setprecision(a)
#define uniq(a) sort(all(a)); (a).erase(unique((a).begin(),(a).end()),(a).end())
#define tc int test; cin>>test; while(test--)
using namespace std; 

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void minSort(int arr[], int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        temp = arr[i];
        j = i - 1;

        cout << " i = " << i << " =====";
        while (j >= 0 && arr[j] > temp){
        cout << " j = " << j << " =====";
            cout << "  arr[j] = " << arr[j] << " arr[j+1] = " << arr[j+1]  << " temp :" << temp << endl;
            arr[j+1] = arr[j];
            j--;
        }
        cout << endl;
        arr[j+1] = temp;
        print(arr, n);
        cout << endl;
        
    }
    print(arr, n);
};
void maxSort(int arr[], int n);

int main()
{
    int arr[] = {55, 40, 53, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    minSort(arr, n);
    cout << "after maxSort" << endl;
    // maxSort(arr, n);
    return 0;
}