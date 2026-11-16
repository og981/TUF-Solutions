class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here

        int n = nums.size();
        if(n<2) return -1;

                sort(nums.begin() , nums.end());

        int largest = nums[n-1];

        int secondl = -1;
        for(int i = n-2; i>=0 ;i--)
        {
            if(nums[i]!=largest) 
            {
                secondl=nums[i];
                break;
            }
        }
        return secondl;
      
    }
};