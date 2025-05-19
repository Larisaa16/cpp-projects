//Given a string representing your stones and another string representing a list of jewels,
//return the number of stones that you have that are also jewels.

#include <iostream>
#include <unordered_set>
#include <string>

int Searching(const std::string& s,const  std::string& v){
    std::unordered_set<char> jewls;
    for(char c:s){
      jewls.insert(c);
    }

    int count=0;
    for(char c:v){
      if(jewls.count(c)) count++;
    }
    return count;
}

int main(){
    std::cout << Searching("abc", "ac") << std::endl;       // Output: 2
    std::cout << Searching("Af", "AaaddfFf") << std::endl;  // Output: 3
    std::cout << Searching("AYOPD", "ayopd") << std::endl;  // Output: 0

    return 0;
}



