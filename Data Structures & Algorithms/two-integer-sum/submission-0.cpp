class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i = 0;i<nums.size();i++){
            int k = target - nums[i];
            if(!m.count(k))
                m[nums[i]] = i;
            else
                return {m[k],i};
        }
        return {};
    }
};
