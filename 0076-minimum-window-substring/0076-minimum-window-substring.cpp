class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>tmap;
        for(int i=0;i<t.size();i++){
            tmap[t[i]]++;
        }

        int l=0,r=0,st=0,count=0,minlen=INT_MAX;
        while(r<s.size()){
            if(tmap[s[r]]>0){
                count++;
            }
            tmap[s[r]]--;
            while(count==t.size()){
                //shrink
                if((r-l+1)<minlen){
                    minlen=r-l+1;
                    st=l;
                }
                tmap[s[l]]++;
                if(tmap[s[l]]>0 )count--;
                
            l++;
            }
           r++;
        }
    return minlen == INT_MAX ? "" : s.substr(st, minlen);
        
    }
};