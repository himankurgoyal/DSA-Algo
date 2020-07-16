//HOUSE THIEVES / HOUSE ROBBER

int rob(vector<int>& nums) {
      int n = nums.size();
        if(n==0)
            return 0;
      int value1=nums[0];
      if(n==1)
          return value1;
      int value2=max(nums[0],nums[1]);
       if(n==2)
            return value2;
       int max_val;
       for(int i=2;i<n;i++)
       {
         max_val=max(value1+nums[i],value2);
         value1=value2;
         value2=max_val;
       }
        return max_val;
    }

//TC: O(n)
//SC: O(1)
