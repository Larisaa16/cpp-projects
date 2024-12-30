#include <iostream>
//the numbers a23a that divide exactly at  6
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        int rez = i * 1000 + 230 + i;
        if (rez % 6 == 0) {
            cout << rez << " ";
        }
    }

    return 0;
}
