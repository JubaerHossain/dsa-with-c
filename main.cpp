#include <bits/stdc++.h>
using namespace std; 

class LinearHash{
    private:
    list<int> *table;

    public:
    LinearHash(int size){
        table = new list<int>[size];
    }

    void insert(int key){
        int index = key % 10;
        table[index].push_back(key);
    }

    void remove(int key){
        int index = key % 10;
        table[index].remove(key);
    }

    bool search(int key){
        int index = key % 10;
        for(auto i = table[index].begin(); i != table[index].end(); i++){
            if(*i == key){
                return true;
            }
        }
        return false;
    }

    void display(){
        for(int i = 0; i < 10; i++){
            cout << i;
            for(auto j = table[i].begin(); j != table[i].end(); j++){
                cout << " --> " << *j;
            }
            cout << endl;
        }
    }



};

int main()
{
    
    return 0;
}