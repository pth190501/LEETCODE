class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = 0;
        int count = 1;
        int n = nums.size();
        if(n <= 1) return nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[x]){
                count--;
                if(count == 0){
                    x = i;
                    count = 1;
                }
            }
            else count++;
        }
        return nums[x];
    }
};