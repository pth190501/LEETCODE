class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        
        sort(strs.begin(),strs.end());
        string ans = "";
        string firstString = strs[0];
        string lastString = strs[strs.size()-1];
        int i = 0;
        
        while(firstString[i] == lastString[i]){
            ans += firstString[i];
            i++;
        }
        return ans;    
    }
};