class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int i=0,n=nums.size();
        while(i!=n)
        {
            if(nums[i]==0)
            {
                i++;
            }
            else
            {
                nums[k++]=nums[i++];
            }
        }
        while(k!=n)
        {
            nums[k++]=0;
        }
    }
};