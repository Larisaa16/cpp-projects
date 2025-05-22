//Return the letter that was randomly added to t if it exists, otherwise, return ’  ‘.

#include <iostream>
#include <string>

char findAddedChar(const std::string s,const std::string t){
  int count[26]={0};
  for(char c:t){
    count[c-'a']++;
  }

  for(char c:s){
    count[c-'a']--;
    }

    for(int i=0;i<26;i++){
      if(count[i]==1)
        return 'a'+i;
    }
    return ' ';
}

int main(){
  std::cout << findAddedChar("foobar", "barfoot") << std::endl;  // t
  std::cout << findAddedChar("ide", "idea") << std::endl;        // a
  std::cout << findAddedChar("coding", "ingcod") << std::endl;   // ' '
}
