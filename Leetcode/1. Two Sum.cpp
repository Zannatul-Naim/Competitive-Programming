class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector < int > ans;
        for(int i = 0; i < v.size(); i++) {
            for(int j = i+1; j < v.size(); j++) {
                if(v[i] + v[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans; 
                }
            }
        }
        return {};
    }
};
