#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class LinearHash {
    private:
        int *table;
        int m;
        int n = 0;

    public:
        LinearHash(int m): m{m} {
            table = new int[m];
            fill(table, table + m, -1);
        }

        ~LinearHash() {
            delete [] table;
        }

        void add(int k) {
            int i = 0; 
            if (((float)n/m) > 0.7) rehash();
            n++;
            while( table[ (k + i) % m ] != -1 ) ++i;
            table[(k + i) % m] = k;
        }

        void show_distribution() {
            for (auto i = 0; i < m; ++i) {
                if      (table[i] == -1) cout << "-";
                else    cout << '*'; 
            }
            cout << endl;
        }

        void rehash() { 
            int *old_table = table; 
            int old_table_size = m; 
            m = 17; 
            n = 0;  
            table = new int[m]; 
            fill(table, table + m, -1); 
            for (int i = 0; i < old_table_size; i++) { 
                if (old_table[i] != -1) {
                    add(old_table[i]); 
                }
            }
            delete [] old_table;
        }
};

int main() {
    auto m{7};
    int n = 0;

    LinearHash linear_hash(m);

    for (int i = 10; i < 30; i=i+5) { // 10, 15, 20, 25
        linear_hash.add(i);
    }
    linear_hash.show_distribution();

    for (int i = 40; i < 51; i++) {
        linear_hash.add(i);
    }
    linear_hash.show_distribution();

    return 0;
}