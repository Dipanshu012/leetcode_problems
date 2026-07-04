class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        for (int i=0;i<g.size();i++) {
            for (int j=0;j<s.size();j++) {
                if(g[i]==s[j]) {
                    count++;
                    break;
                }    
            }
        }
        return count;
    }
};