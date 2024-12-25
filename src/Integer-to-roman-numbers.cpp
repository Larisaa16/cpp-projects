#include <iostream>
#include <vector>

using namespace std;

string intToRoman(int nr){
 vector<pair<int, string>> romanNr = {
    {1000,"M"},{900,"CM"}, {500,"D"},{400,"CD"},{100,"C"},{90,"XC"},
    {50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
};

    string result;


    for(auto& pair:romanNr){
      while(nr>=pair.first){
        result +=pair.second;
        nr-=pair.first;
      }
    }
    return result;

}

int main(){

  int nr;
  cout<<"Enter the arab number you want to convert: "; cin>>nr;

  const string roman = intToRoman(nr);
  cout<<"The roman number is: "<<roman<<endl;
   return 0;
}
