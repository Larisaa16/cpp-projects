/*Să se descrie un algoritm pentru a exprima o sumă de lei citită de la tastatură în număr
minim de bancnote în valoarea de 1 leu, 5 lei, 10 lei, 50 lei, 100 lei, 200lei şi 500 lei. */

#include <iostream>

using namespace std;

void Bacnote(int suma) {
    int bacnote[]={500, 200, 100, 50, 10, 5, 1};
    int nr_bacnote[7]={0};

    for (int i=0;i<7;i++) {
        if (suma>=bacnote[i]) {
            nr_bacnote[i]=suma/bacnote[i];
            suma%=bacnote[i];
        }
    }

    cout<<"Descompunerea sumei in bacnote: "<<endl;
    for (int i=0;i<7;i++) {
        if (nr_bacnote[i]>0) {
            cout << nr_bacnote[i] << " de " <<bacnote[i] << " lei\n";
        }

    }
}

int main() {
    int a;
    cout<<"Dati nr: ";
    cin>>a;

    Bacnote(a);

    return 0;

}



