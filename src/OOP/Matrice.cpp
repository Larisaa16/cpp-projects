#include <iostream>
//de revazut!!
using namespace std;

class Matrice {
private:
    int m, n;
    int** data;

public:
    // Constructor general (poate fi folosit și fără input)
    Matrice(int linii, int coloane, bool initializare = true) : m(linii), n(coloane) {
        data = new int*[m];
        for (int i = 0; i < m; i++) {
            data[i] = new int[n];
        }

        if (initializare) { // Se inițializează doar dacă este necesar
            cout << "Introduceți elementele matricei: " << endl;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    cin >> data[i][j];
                }
            }
        }
    }

    // Destructor
    ~Matrice() {
        for (int i = 0; i < m; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Adunarea a două matrici
    Matrice adunare(const Matrice& other) const {
        if (m != other.m || n != other.n) {
            cerr << "Eroare: matricile au dimensiuni diferite!" << endl;
            return Matrice(0, 0, false);  // Matrice invalidă
        }

        Matrice rezultat(m, n, false);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rezultat.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return rezultat;
    }

    // Afișarea matricei
    void afisare() const {
        if (m == 0 || n == 0) {
            cout << "Matrice invalidă!" << endl;
            return;
        }

        cout << "Matricea:\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int linii, coloane;
    cout << "Introduceți dimensiunile matricelor (linii coloane): ";
    cin >> linii >> coloane;

    Matrice m1(linii, coloane);
    Matrice m2(linii, coloane);

    Matrice rezultat = m1.adunare(m2);
    rezultat.afisare();

    return 0;
}
