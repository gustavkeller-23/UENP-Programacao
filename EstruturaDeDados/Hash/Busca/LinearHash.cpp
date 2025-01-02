#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class LinearHash {
    private:
        int *table; // Tabela Hash
        int m; // Tamanho inicial
    public:
        // Construtor
        LinearHash(int m): m{m} {
            table = new int[m];
            fill(table, table + m, -1); // Inicializa com -1
        }

        ~LinearHash() {
            delete [] table;
        }

        void add (int k) {
            int i = 0;

            // Funcao hash linear: incrementa o indice ate encontrar um local disponivel
            while( table[ (k + i) % m ] != -1 ) ++i;
            table[(k + i) % m] = k;
        }

        void show_distribution() {
            for (auto i = 0; i < m; ++i) {
                if      (table[i] == -1) cout << "-";
                else    cout << table[i] << ", "; 
            }
            cout << endl;
        }

        void search(int k) {
            for (int i = 0; i < m; i++){
                if (table[(k + i) % m] == k){
                    cout << "TRUE";
                    return;
                }
            }
            cout << "FALSE" << endl;
        }
};



int main() {
    auto m{97};
    
    LinearHash linear_hash(m);
    auto initial_value = 10;
    
    for (int i = 0; i < 60; ++i) {
        linear_hash.add(initial_value);
        initial_value += m;
    }
    
    linear_hash.show_distribution();
    linear_hash.search(12);
}