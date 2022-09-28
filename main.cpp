#include <bits/stdc++.h>
using namespace std; 

class HashTable {
    private:
    int n;
    list<int> *table;

    public:
    HashTable(int n) ;

    void insert(int key) ;

    void remove(int key) ;

    bool search(int key) ;

    void display() ;
};

HashTable::HashTable(int n) {
    this->n = n;
    table = new list<int>[n];
}

void HashTable::insert(int key) {
    int i = key % n;
    table[i].push_back(key);
}

void HashTable::remove(int key) {
    int i = key % n;
    table[i].remove(key);
}

bool HashTable::search(int key) {
    int i = key % n;
    for (auto x : table[i])
        if (x == key)
            return true;
    return false;
}

void HashTable::display() {
    for (int i = 0; i < n; i++) {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }
}



int main()
{
    vector<int> keys = {4, 6, 9, 12, 34};
    HashTable h(10);
    for (int key : keys)
        h.insert(key);

    h.display();

    
    return 0;
}