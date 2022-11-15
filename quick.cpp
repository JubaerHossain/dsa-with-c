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

int partition (int a[], int start, int end){
    cout<<"partition called"<<endl;
    cout << "start: " << start << " end: " << end << endl;
    int pivot = a[end];
    int index = start;
    cout << "pivot: " << pivot << endl;
    cout << "index: " << index << endl;
    while (start < end){
        if (a[start] <= pivot){
            swap(a[start], a[index]);
            index++;
        }
        start++;
    }
    swap(a[index], a[end]);
    return index;

}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(a, low, high);
        quickSort(a, low, pivot - 1);
        quickSort(a, pivot + 1, high);
    }
}

int main()
{
    int a[] = { 4, 6, 2, 5, 7, 8, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Given array is: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    quickSort(a, 0, n - 1);

    cout << endl;

    cout  << "Sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }


    
    return 0;
}