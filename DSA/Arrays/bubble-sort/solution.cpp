class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i =0; i<=n-2 ; i++)
        {
            for(int j =0 ; j<=n-i-2 ; j++)
            {
                if(nums[j+1] < nums[j] )
                {
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
};
