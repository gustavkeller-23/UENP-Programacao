#include <iostream>
#include <string>
#include <iomanip> // Para std::setw e std::setfill
#include <openssl/sha.h> // Biblioteca do OpenSSL

using namespace std;

string computeSHA256(const string &input) {
    // Buffer para armazenar o hash (32 bytes para SHA-256)
    unsigned char hash[SHA256_DIGEST_LENGTH];

    // Calcula o hash usando a fun ̧c~ao SHA256 do OpenSSL
    SHA256(reinterpret_cast<const unsigned char*>(input.c_str()), input.size(), hash);
    
    // Converter o hash para uma string hexadecimal leg ́ıvel
    ostringstream hexStream;
    
    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i) {
        hexStream << hex << setw(2) << setfill('0') << static_cast<int>(hash[i]);
    }
    return hexStream.str();
}

int main() {
    string input;

    cout << "Digite o texto para calcular o hash SHA-256: ";
    getline(cin, input);
    
    string hash = computeSHA256(input);
    cout << "SHA-256 do texto \"" << input << "\": " << hash << endl;
    
    return 0;
}