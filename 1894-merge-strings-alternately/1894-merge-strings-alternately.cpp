class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int m=word1.size();
        int n=word2.size();
        int i=0,j=0,temp=0;

        while(i<m && j<n){
            if(temp==0){
            ans.push_back(word1[i]);
            i++;
            }
            else{
                ans.push_back(word2[j]);
                j++;

            }
            temp=abs(temp-1);
        }

        if(i<m){
            for(int k=i;k<m;k++){
                ans.push_back(word1[k]);
            }
        }
        if(j<n){
            for(int k=j;k<n;k++){
                ans.push_back(word2[k]);
            }
        }
        return ans;
    }
};