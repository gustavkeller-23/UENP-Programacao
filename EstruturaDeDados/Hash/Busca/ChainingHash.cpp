#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class ChainingHash {
    private:
        list<int> *table;
        int m;
    
    public:
        ChainingHash(int m): m{m} {
            table = new list<int>[m];
        }

        ~ChainingHash() {
            delete [] table;
        }

        void add(int k) {
            int i = k % m;
            table[i].emplace_back(k);
        }

        void show_distribution() {
            for (int i = 0; i < m; ++i) {
                cout << i << ") ";
                for (auto k : table[i]) {
                    cout << '*';
                }
                cout << endl;
            }
        }

        void search(int k) {
            int i = k % m;
            for(auto j : table[i]){
                if (j == k){
                    cout << "TRUE";
                    return;
                }
            }
            cout << "FALSE" << endl;
        }
};

int main() {
    auto m{97};
    
    ChainingHash chaining_hash(m);
    
    for (int k = 0; k < 1000; ++k) {
        if (k % 2 == 0) {
            chaining_hash.add(k);
        }
    }
    
    chaining_hash.show_distribution();
    
    chaining_hash.search(1002);

    return 0;
}