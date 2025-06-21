#include<bits/stdc++.h>

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int rightSum=0;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
          rightSum=accumulate(nums.begin()+i+1,nums.end(),0);
          leftSum=accumulate(nums.begin(),nums.begin()+i,0);
          if(leftSum==rightSum)return i;
        }
        return -1;
    }


        
    
};