class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        //for citations
        vector<int>frq(n+1);
        for(int i=0;i<n;i++){
            if(citations[i]>n){
                frq[n]++;
            }else frq[citations[i]]++;
        }
        int Hindex=n;
        int num=frq[n];
        while(num<Hindex){
            Hindex--;
            num+=frq[Hindex];
        }
        return Hindex;

        
    }
};