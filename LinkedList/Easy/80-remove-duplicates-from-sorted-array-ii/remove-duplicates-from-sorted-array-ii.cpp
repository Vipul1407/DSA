class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n= nums.size();
        int j=1;
        int k=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[j]=nums[i+1];
                j++;
                k=1;
            }
            else
            {
                k++;
                if(k==2)
                {
                    nums[j]=nums[i+1];
                    j++;
                }
            }
        }    
        return j;
    }
};