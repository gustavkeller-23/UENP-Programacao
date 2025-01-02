#include <string>
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

        unsigned int hashString(const std::string& s, int m) {
            unsigned int hash = 0;
            int b = 37;
            for (char c : s) {
                hash = (hash * b + c) % m;
            }
            return hash;
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
};

int main() {
    auto m{101};

    string pal1 = "hash";
    string pal2 = "função";
    string pal3 = "dispersão";

    ChainingHash chaining_hash(m);
    
    chaining_hash.add(chaining_hash.hashString(pal1, m));
    chaining_hash.add(chaining_hash.hashString(pal2, m));
    chaining_hash.add(chaining_hash.hashString(pal3, m));
    
    chaining_hash.show_distribution();
    
    return 0;
}