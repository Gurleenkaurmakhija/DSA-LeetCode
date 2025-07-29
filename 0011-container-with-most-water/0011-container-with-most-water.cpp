class Solution {
public:
    int maxArea(vector<int>& height) {
        int h=INT_MAX;
        int w=-1;
        int i=0,area=INT_MIN;
        int j=height.size()-1;
        while(i<j){
            h=min(height[i],height[j]);
            w=j-i;
            area=max(area,h*w);
            if(height[i]<height[j]){
                i++;
            }else j--;

        }
        return area;
    }
};