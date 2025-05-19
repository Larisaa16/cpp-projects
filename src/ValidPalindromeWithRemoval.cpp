#include <iostream>
#include <string>
bool isPalindrome(std::string& s, int left, int right){
  while(left<right){
    if(s[left++]!=s[right--]) return false;
  }
  return true;
}

bool isValidPalindrome(std::string s){
  int left=0, right=s.size()-1;
  while(left<right){
    if(s[left]!=s[right]){
      return isPalindrome(s,left+1,right)||isPalindrome(s,left,right-1);
    }
    left++;
    right--;
  }
  return true;
}
int main() {
  std::cout << isValidPalindrome("abcba") << std::endl;    // true
  std::cout << isValidPalindrome("foobof") << std::endl;   // true
  std::cout << isValidPalindrome("abccab") << std::endl;   // false
  return 0;
}