#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class UniversalHash {
    private:
        list<int> *table;
        int m;
    
    public:
        UniversalHash(int m): m{m} {
            table = new list<int>[m];
        }

        ~UniversalHash() {
            delete [] table;
        }

        int universalHash(int a, int b, int k) {
           return ((a * k + b) % 104729) % m;
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
};

int main() {
    auto m{10};
    int a = 5, b = 7;    
    
    UniversalHash universal_hash(m);
    
    for (int k = 15; k < 50; k=k+10)
        universal_hash.add(universal_hash.universalHash(a, b, k));
    

    universal_hash.show_distribution();

    return 0;
}


/*

#include <vector>

int universalHash(int a, int b, int k, int m) {
    return ((a * k + b) % 104729) % m;
}

int main() {
    int a = 5, b = 7, m = 10;
    std::cout << universalHash(a, b, 25, m) << std::endl;
    return 0;
}

*/