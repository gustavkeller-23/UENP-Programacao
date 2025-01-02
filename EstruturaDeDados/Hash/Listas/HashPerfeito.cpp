#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class PerfectHash {
    private:
        int *table;
        int m;
    
    public:
        PerfectHash(int m): m{m} {
            table = new int[m];
            fill(table, table + m, -1);
        }

        ~PerfectHash() {
            delete [] table;
        }

        void add(int k) {
            int i = (k * 3) % m;
            table[i] = k;
        }

        void show_distribution() {
            for (int i = 0; i < m; ++i) {
                cout << i << ") ";
                if(table[i] != -1) {
                    cout << '*';
                }
                cout << endl;
            }
        }
};

int main() {
    auto m{7};
    
    PerfectHash perfect_hash(m);
    
    for (int k = 10; k < 50; k=k+10) {
        perfect_hash.add(k);
    }
    
    perfect_hash.show_distribution();

    return 0;
}