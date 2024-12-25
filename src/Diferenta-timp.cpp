#include <iostream>

using namespace std;

/*int main() {
    int h1, h2, m1, m2, s1, s2, h, m, s = 0;

    cout << "Enter the first time(hour,minutes,sec): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter the second time(hour,minutes,sec): ";
    cin >> h2 >> m2 >> s2;

    if (s1 >= s2)
        s = s1 - s2;

    else if (m1 > 0) {
        m1--;
        s = 60 + s1 - s2;
    }
    else {
        h1--;
        m1=60-1;
        s1=60+s1-s2;
    }
    if (m1>m2)
        m=m1-m2;
    else {
        h1--;
        m=60+m1-m2;
    }
    const int h = h1 - h2;

    cout<<"The time is: "<<h<<" "<<m<<" "<<s;
    return 0;

}*/

int main() {
    int h1, h2, m1, m2, s1, s2, h, m, s;

    cout << "Enter the first time(hour,minutes,sec): ";
    cin >> h1 >> m1 >> s1;
    cout << "Enter the second time(hour,minutes,sec): ";
    cin >> h2 >> m2 >> s2;

    s=s1-s2;
    m=m1-m2;
    h=h1-h2;

    if (s1<s2) {
        m--;
        s+=60;
    }
    if (m1<m2) {
        h--;
        m+=60;
    }

    cout<<"The time is: "<<h<<" hrs "<<m<<" min "<<s<<" sec";

  return 0;
}