class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> arr;
        vector<string> sorted = strs;
        unordered_map<string, vector<string>> groups;
        for(int i=0;i < sorted.size();i++){
            sort(sorted[i].begin(),sorted[i].end());
        }
        for (int i = 0; i < strs.size(); i++) {
            groups[sorted[i]].push_back(strs[i]);
        }
        for (auto entry : groups){
            arr.push_back(entry.second);
        }
        return arr;
    }
};
