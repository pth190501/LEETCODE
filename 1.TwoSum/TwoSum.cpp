class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> slt;
        for (int i=0;i<nums.size();i++){
            int x = nums[i];
            for (int j=i+1;j<nums.size();j++){
                if (target - x == nums[j]){
                    slt.push_back(i);
                    slt.push_back(j);
                }
            }
        }
        return slt;
    }
};