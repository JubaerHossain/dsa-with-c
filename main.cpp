#include <bits/stdc++.h>
using namespace std; 

class BinarySearch{
    private:
        int *arr;
        int size;
    public:
        BinarySearch(int *arr, int size){
            this->arr = arr;
            this->size = size;
        }
        int search(int key){
            int low = 0, high = size - 1;
            while(low <= high){
                int mid = (low + high) / 2;
                if(arr[mid] == key){
                    return mid;
                }
                else if(arr[mid] < key){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            return -1;
        }

};

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    BinarySearch bs(arr, size);
    int key = 5;
    int index = bs.search(key);
    if(index == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index " << index << endl;
    }

    
    return 0;
}