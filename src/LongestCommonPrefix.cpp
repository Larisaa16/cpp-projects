#include <iostream>
#include <string>
#include <vector>

int main() {
  int n;
  std::cout<<"Nr de cuvinte:\n";
  std::cin>>n;

  std::vector<std::string> cuvinte(n);
  std::cout<<"Cuvinte\n";
  for(int i=0;i<n;i++){
    std::cin>>cuvinte[i];
  }

  if(n==0) {
    std::cout<<"null ";
    return 0;
  }

  std::string prefix=cuvinte[0];
  for(int i=1;i<n;i++){
  while(cuvinte[i].find(prefix)!=0){
    prefix=prefix.substr(0,prefix.length()-1);
    if(prefix.empty()) {
      std::cout<<" ";
      return 0;
    }
  }
 }
 std::cout<<"prefixul e "<<prefix;
 return 0;
}