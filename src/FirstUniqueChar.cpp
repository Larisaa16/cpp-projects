//Given a string, return the index of its first unique character. If a unique character does not exist, return -1.


#include <iostream>

int firstChar(std::string s){
  int count[26]={0};

  for(char c:s){
    count[c-'a']++;
  }

  for(int i=0;i<s.length();i++){
      if(count[s[i]-'a']==1)
      return i;
  }
  return -1;
}

int main(){
  std::cout<<firstChar("abcabd")<<std::endl;
  std::cout<<firstChar("thedailybyte")<<std::endl;
  std::cout<<firstChar("developer")<<std::endl;
}

