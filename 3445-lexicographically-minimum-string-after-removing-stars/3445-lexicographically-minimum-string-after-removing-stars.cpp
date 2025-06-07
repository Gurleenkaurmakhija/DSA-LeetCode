class Solution {
public:
    string clearStars(string s) {
        vector<stack<int>> um(26);
        vector<int> rem(s.size(), 0);   // take all index in start

        int i=0;
        while(i<s.size()){
            char ch = s[i]-'a';
            um[ch].push(i);
            i++;

            int cnt=0;
            while(i<s.size() and s[i] == '*'){
                cnt++;
                i++;
            }

            if(cnt>0){
                for(char c=0;c<=25;c++){
                    while(!um[c].empty()){
                        int ind = um[c].top();
                        um[c].pop();

                        rem[ind] = 1;

                        cnt--;
                        if(cnt==0){break;}
                    }
                    if(cnt==0){break;}
                }
            }
        }

        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!='*' and rem[i]==0){
                ans += s[i];
            }
        }
        return ans;
    }
};