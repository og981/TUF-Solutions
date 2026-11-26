class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> pos;
        vector<int> neg;
        vector<int> ans(n);

        for(int i = 0; i<n ; i++)
        {
            if(nums[i] >= 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for(int j = 0; j<n ; j++)
        {
            if(j%2 == 0) ans[j] = pos[j/2];
            else ans[j] = neg[j/2];
        }
        return ans;
    }
};