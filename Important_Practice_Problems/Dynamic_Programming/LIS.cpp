//LIS

int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
          return 0;
        vector<int> LIS(n,1);
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
            {
              if(nums[i]>nums[j]&&LIS[i]<LIS[j]+1)
                LIS[i]=LIS[j]+1;
            }
        return *max_element(LIS.begin(),LIS.end());
    }

//TC:O(n^2)
//SC:O(n^2)
//Note: (1) Important thing to remember that don't forget to check whether the given sequence is empty or not.
//      (2) There is one more solution available for LIS with O(nlogn) time complexity less then this DP soln check it.


