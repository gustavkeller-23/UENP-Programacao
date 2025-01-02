#include<iostream>
#include<list>
#include<string>
#include<cmath>

using namespace std;

class QuadraticHash {
    private:
        int *table; // Tabela Hash
        int m; // Tamanho inicial
        int c1, c2; // Coeficientes
    public:
        // Construtor
        QuadraticHash(int m, int c1, int c2): m{m}, c1{c1}, c2{c2} {
            table = new int[m];
            fill(table, table + m, -1); // Inicializa com -1
        }

        ~QuadraticHash() {
            delete [] table;
        }

        void add (int k) {
            int i = 0;

            // Funcao hash quadratica: incrementa o indice ate encontrar um local disponivel
            auto index = (k + c1 * i + c2 * i*i) % m;
            while( table[index] != -1 ) {
                ++i;
                index = (k + c1 * i + c2 * i*i) % m;
            }
            table[index] = k;
        }

        void show_distribution() {
            for (auto i = 0; i < m; ++i) {
                if      (table[i] == -1) cout << "-";
                else    cout << '*'; 
            }
            cout << endl;
        }

        void search(int k) {
            for (int i = 0; i*i < m; i++){
                if (table[(k + c1 * i + c2 * i*i) % m] == k){
                    cout << "TRUE";
                    return;
                }
            }
            cout << "FALSE" << endl;
        }
};

int main() {
    auto m{97};
    auto initial_value = 10;

    QuadraticHash quadratic_hash(m, 0, 1);
    
    for (int i = 0; i < 60; ++i) {
        quadratic_hash.add(initial_value);
        initial_value += m;
    }
    
    quadratic_hash.show_distribution();
    quadratic_hash.search(10);

    return 0;
}