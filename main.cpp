#include <bits/stdc++.h>
using namespace std; 

class QuadraticHash{
    int *arr;
    int size;
    int capacity;
    public:
    QuadraticHash(int cap){
        capacity = cap;
        size = 0;
        arr = new int[cap];
        for(int i=0;i<cap;i++){
            arr[i] = -1;
        }
    }
    int hash(int key){
        return key%capacity;
    }
    int hash2(int key){
        return 7-(key%7);
    }
    void insert(int key){
        if(size==capacity){
            cout<<"Hash Table is full"<<endl;
            return;
        }
        int i = hash(key);
        int j = hash2(key);
        int k = 0;
        while(arr[(i+k*j)%capacity]!=-1){
            k++;
        }
        arr[(i+k*j)%capacity] = key;
        size++;
    }
    void remove(int key){
        int i = hash(key);
        int j = hash2(key);
        int k = 0;
        while(arr[(i+k*j)%capacity]!=key){
            k++;
        }
        arr[(i+k*j)%capacity] = -1;
        size--;
    }
    void display(){
        for(int i=0;i<capacity;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    
    QuadraticHash qh(10);
    qh.insert(4);
    qh.insert(6);
    qh.insert(14);
    qh.insert(9);
    qh.insert(12);
    qh.insert(34);

    qh.display();
    return 0;
}