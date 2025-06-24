class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int ans;
        int count =0;
        int el=0;
        
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=nums[i];
            }
            if(nums[i]==el){
                count++;
            }else{
                count--;
            }
            
        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el)count++;

        }
        if(count>nums.size()/2)return el;
        else return -1;
    }
};