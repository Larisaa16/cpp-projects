//Given two strings s and t return whether or not s is an anagram of t.
//Note: An anagram is a word formed by reordering the letters of another word.

#include <iostream>
#include <string>



bool validAnagram(std::string s, std::string t) {
    int count[26]={0};
    if(s.length()!=t.length()){
        return false;
    }

    for(char c:s){
        count[c-'a']++;
    }
    for(char c:t) {
        count[c-'a']--;
        if(count[c-'a']<0) return false;
    }
    return true;
}

void print(const std::string& s, const std::string t) {
    std::cout<<validAnagram(s, t)<<"\n";
}

int main(){
    std::cout<<std::boolalpha;
    print("cat","tac");
    print("listen","silent");
    print("cake","fruit");
}