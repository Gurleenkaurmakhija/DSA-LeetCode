class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int temp=nums1.size()-1;
        int j=n-1;
        while(i>=0 && j>=0){
            if(nums1[i]<=nums2[j]){
                nums1[temp]=nums2[j];
                j--;
            }
           else{
            nums1[temp]=nums1[i];
            i--;

           }
           temp--;
            
        }
        while(j>=0){
            nums1[temp--]=nums2[j--];
        }
        
        
    }
};