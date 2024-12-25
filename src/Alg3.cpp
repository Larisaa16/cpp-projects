#include <iostream>
//Să se determine permutările circulare ale unui număr de 3 cifre
using namespace std;

int main(){
  int n;
  cout<<"n: ";
  cin>>n;
  n=n%100*10+n/100;
  cout<<n<<endl;
  n=n%100*10+n/100;
  cout<<n<<endl;

  return 0;

}

