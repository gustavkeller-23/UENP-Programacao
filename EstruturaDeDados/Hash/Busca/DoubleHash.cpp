#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class DoubleHash {
    private:
        int *table; // Tabela Hash
        int m; // Tamanho inicial

    public:
        // Construtor
        DoubleHash(int m): m{m} {
            table = new int[m];
            fill(table, table + m, -1); // Inicializa com -1
        }

        ~DoubleHash() {
            delete [] table;
        }

        int hash(int k, int i) {
            return (h1(k) + i * h2(k)) % m; 
        }

        int h1(int k) {
            return k % m;
        }

        int h2(int k) {
            return 1 + (k % (m-1));
        }

        void add (int k) {
            int i = 0;

            // Funcao hash quadratica: incrementa o indice ate encontrar um local disponivel
            auto index = hash(k, i);
            while( table[index] != -1 ) {
                ++i;
                index = hash(k, i);
            }
            table[index] = k;
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
                if (table[hash(k, i)] == k){
                    cout << "TRUE";
                    return;
                }
            }
            cout << "FALSE" << endl;
        }
};

int main() {
    auto m{97};
   
    DoubleHash double_hash(m);
    auto initial_value = 10;
    
    for (int i = 0; i < 60; ++i) {
        double_hash.add(initial_value);
        initial_value += m;
    }
    
    double_hash.show_distribution();
    double_hash.search(10);

    return 0;
}