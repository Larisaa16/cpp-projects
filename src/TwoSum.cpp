//Given an array of integers, return whether or not two numbers sum to a given target, k.
//Note: you may not sum a number with itself.

#include <iostream>
#include <vector>
#include <unordered_set>

bool hasTowSum(const std::vector<int>& nums, int k){
  std::unordered_set<int> seen;

  for(int num:nums){
    int difference=k-num;
    if(seen.count(difference)){
      std::cout << "Numerele care fac suma " << k << " sunt: " << difference << " + " << num << " = " << k << std::endl;
      return true;
    }
    seen.insert(num);
  }
  return false;
}

int main(){
 std::vector<int> nums = {1,3,8,2};
 int k=10;
 std::cout << hasTowSum(nums, k) << std::endl;

  return 0;
}
